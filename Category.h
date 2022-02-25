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
    void deleteEntry();
    //Function for deleting entry
    void editEntry();
    //function for editing entry
    void searchEntry();
    //function for searching entry
    void viewAllEntries();
    //function for viewing all entries in category


};


#endif //DIVERSITYEQUITYINLCUSION_CATEGORY_H
