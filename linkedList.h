//
// Created by Jaden Stanton on 2/22/22.
//
//Parent class for category class - Jaden Stanton
#ifndef DIVERSITYEQUITYINLCUSION_LINKEDLIST_H
#define DIVERSITYEQUITYINLCUSION_LINKEDLIST_H

#include <string>
#include <utility>

class Node {

public:
    Node*  accessHead() const { return(head);}
    //accessor function for head
    void addItem(Node *n);
    //function for adding entries - Jaden Stanton
    int listLength(Node *n);
    //function for retrieving amount of entries - Jaden Stanton
    void printList(Node *n);
    //function for displaying info - Jaden Stanton
    void isEmpty(Node *n);
    //function for checking whether section is empty or not - Jaden Stanton
    void search(Node *n, std::string item);
    //function for searching for specific category - Jaden Stanton
    //this might be irrelevant
    void retrieveFirst(Node *n);
    //function for retrieving the latest entry - Jaden Stanton
    void retrieveLast(Node *n);
    //function for retrieving the earliest entry - Jaden Stanton
    void retrieve(Node *n);
    //function for retrieving specific entry - Jaden Stanton
    //may be irrelevant
    void deleteItem(Node *n, std::string item);
    //function for deleting entry - Jaden Stanton
    //needs to be verified
    void destroyList(Node *n);
    //function for deleting all data in category - Jaden Stanton
    void mergeSort(Node *n);
    //function for sorting stats - Jaden Stanton
    Node* sortedMerge(Node *a, Node *b);
    //function for mergeSort
    void halfSplit(Node* source, Node** frontRef, Node** backRef);
    //function for mergeSort


    // Default constructor
Node(){
        info = "EMPTY";
        link = nullptr;
    }

    // Parameter Constructor
explicit Node(std::string data){
        this->info = std::move(data);
        this->link = nullptr;
    }
protected:
    std::string info;
    Node* link{};
    Node *tmp = nullptr;
    Node *head = nullptr;
    Node *head2 = nullptr;
    Node *current = nullptr;
    Node *newNode = nullptr;
    Node *prev = nullptr;
};

#endif //DIVERSITYEQUITYINLCUSION_LINKEDLIST_H
