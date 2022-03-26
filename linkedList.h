//
// Created by Jaden Stanton on 2/22/22.
//

#ifndef DIVERSITYEQUITYINLCUSION_LINKEDLIST_H
#define DIVERSITYEQUITYINLCUSION_LINKEDLIST_H

#include <string>

//template<class nodeType>
class Node {

public:
    void addItem(Node *n);
    //function for adding entries
    int listLength(Node *n);
    //function for retrieving amount of entries
    void printList(Node *n);
    //function for displaying info
    void isEmpty(Node *n);
    //function for checking whether section is empty or not
    void search(Node *n, std::string item);
    //function for searching for specific category
    //this might be irrelevant
    void retrieveFirst(Node *n);
    //function for retrieving the latest entry
    void retrieveLast(Node *n);
    //function for retrieving the earliest entry
    void retrieve(Node *n);
    //function for retrieving specific entry
    //may be irrelevant
    void deleteItem(Node *n, std::string item);
    //function for deleting entry
    //needs to be verified
    void destroyList(Node *n);
    //function for deleting all data in category

    // Default constructor
    Node(){
        info = "EMPTY";
        link = nullptr;
    }

    // Parameter Constructor
explicit Node(int data){
        this->info = std::move(data);
        this->link = nullptr;
    }

private:
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
