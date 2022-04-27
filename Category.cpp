//
// Created by Jaden Stanton on 2/25/22.
//

#include "Category.h"
#include "linkedList.h"

//void Category::addEntry() {
////    current = head;
//    Node::addItem(head);
//}

void Category::editEntry() {}

void Category::deleteEntry(double key) {
    Node::deleteItem(head, key);
}

void Category::searchEntry(double key) {
    Node::search(head, key);
}

void Category::viewAll() {
    Node::printList(head);
}

void Category::isEmpty(){
    Node::isEmpty(head);
}

