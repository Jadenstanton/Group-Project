//
// Created by Jaden Stanton on 2/25/22.
//
//Class for manipulating each category of statistics as a linked list - Jaden Stanton
#ifndef DIVERSITYEQUITYINLCUSION_CATEGORY_H
#define DIVERSITYEQUITYINLCUSION_CATEGORY_H
#include "linkedList.h"

class Category: public Node {
public:
    void addEntry();
    //Function for adding entry
    void deleteEntry(std::string key);
    //Function for deleting entry
    //takes key for index to be searched for
    void editEntry();
    //function for editing entry
    void searchEntry(std::string key);
    //function for searching entry
    //takes key for index to be searched for
    void viewAll();
    //function for viewing all entries in category
    void isEmpty();
    //function for determining if empty
    Category() =default;


};


#endif //DIVERSITYEQUITYINLCUSION_CATEGORY_H
