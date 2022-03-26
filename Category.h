//
// Created by Jaden Stanton on 2/25/22.
//

#ifndef DIVERSITYEQUITYINLCUSION_CATEGORY_H
#define DIVERSITYEQUITYINLCUSION_CATEGORY_H
#include "linkedList.h"

class Category: public Node {
public:
    void addEntry();
    //Function for adding entry
    void deleteEntry(std::string key);
    //Function for deleting entry
    void editEntry();
    //function for editing entry
    void searchEntry(std::string key);
    //function for searching entry
    void viewAllEntries();
    //function for viewing all entries in category
    Category() =default;
};

#endif //DIVERSITYEQUITYINLCUSION_CATEGORY_H
