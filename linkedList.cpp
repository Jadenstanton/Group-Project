//
// Created by Jaden Stanton on 2/22/22.
//
#include "linkedList.h"
#include <string>
#include <iostream>


void Node::addItem(Node *n) {//edit this to add a string instead of num
    std::string str;//input info
    int num;
    std::cout << "Record your entry: ";
    std::cin >> str;
    std::cout << "Enter -1 to stop, or 1 to continue: ";
    std::cin >> num;
    while(num != -1){

        newNode = new Node;
        newNode->info = str;
        newNode->link = nullptr;

        if (head == nullptr){
            head = newNode;
        }else{
            current = head;
            while (current->link != nullptr){
                current = current->link;
            }
            current->link = newNode;
        }

        std::cout << "Record your entry: ";
        std::cin >> str;
        std::cout << "Enter -1 to stop, or 1 to continue: \n";
        std::cin >> num;
    }
}

int Node::listLength(Node *n) {
    int counter = 0; //initialize counter
    current = head; //start counting from the beginning of the list
    while(current != nullptr){
        counter++; //increment counter
        current = current->link; //move to next node

    }
    return counter;
}

void Node::printList(Node *n){
    current = head;
    while(current != nullptr){
        std::cout << current->info << "\t \n";
        current = current->link;
    }
}

void Node::isEmpty(Node *n){
    current = head;
    if(current == nullptr){
        std::cout<< "The section is empty.\n";
    }else{
        std::cout<< "The section is not empty.\n";
    }
}

void Node::search(Node *n, std::string item){//come back and add multi instances
    int counter=0; //keep track of index
    current = head;
    while(current != nullptr){
        if(current->info == item){ //edit for string
            std::cout<<"Item is at index "<<counter<<std::endl; //return index of item
        }else{
            counter++; //increment counter if not in list
        }
//        counter++;//increment counter
        current = current->link; //move to next node
    }
}

void Node::retrieveFirst(Node *n){ //find first entry
    current = head;
    std::cout << current->info;
}

void Node::retrieveLast(Node *n){//find last entry
    current = head;
    while(current->link != nullptr){
        current = current->link;
    }
    std::cout << current->info;
}

void Node::retrieve(Node *n){
    int num;
    std::cout << "\nEnter 1 for first entry or enter 2 for last entry: ";
    std::cin >> num;
    if(num == 1){
        std::cout << "The first entry is: ";
        retrieveFirst(head);
        std::cout << "\n\n";
    }else if(num == 2){
        std::cout << "The last entry is: ";
        retrieveLast(head);
        std::cout << "\n\n";
    }else{
        std::cout << "Enter an appropriate choice: ";
    }
}

void Node::deleteItem(Node *n, std::string item){ //edit for string
    //save head in temporary ptr
    current = head;

    if(current->info == item){ //if item is first in list
        tmp = current;
        current = current->link;
        head = current;
        delete tmp;
    }else{
        while(current->link->info != item){ //find item to be deleted
            current = current->link;
        }
        tmp = current->link;
        current->link = tmp->link;
        delete tmp;
    }
}

void Node::destroyList(Node *n){
    current = head;

    while(current != nullptr){
        tmp = current;//store current to be deleted
        current = current->link;//move to next node
        delete tmp;//delete previously stored node
    }
    head = nullptr;//set head to null after list is emptied
}

void Node::mergeSort(Node *n){
    current = head;
    Node *a;
    Node *b;

    //Base case, length 0 or 1
    if ((head == nullptr) || (head->link == nullptr)) {
        return;
    }

    //Split head into a and b sublists
    halfSplit(head, &a, &b);

    //Recursively sort the sublists
    mergeSort(a);
    mergeSort(b);

    //answer = merge the two sorted lists together
    n = sortedMerge(a, b);
}

Node* Node::sortedMerge(Node* a, Node* b){
    Node *result = nullptr;

    //Base cases
    if (a == nullptr)
        return (b);
    else if (b == nullptr)
        return (a);

    // Pick a or b, and recur
    if (a->info <= b->info) {
        result = a;
        result->link = sortedMerge(a->link, b);
    }
    else {
        result = b;
        result->link = sortedMerge(a, b->link);
    }
    return (result);
}

void Node::halfSplit(Node* source, Node** frontRef, Node** backRef){
    Node* fast;
    Node* slow;
    slow = source;
    fast = source->link;

    //Advance fast nodes and slow node
    while (fast != nullptr) {
        fast = fast->link;
        if (fast != nullptr) {
            slow = slow->link;
            fast = fast->link;
        }
    }

    //slow node is before the midpoint in the list, so split it in two at that point
    *frontRef = source;
    *backRef = slow->link;
    slow->link = nullptr;
}




