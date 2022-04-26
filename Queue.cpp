//
// Created by Jaden Stanton on 4/19/22.
//
#include <iostream>
#include "Queue.h"

void Queue::queuePush() {
    std::string str;//input info
    std::cout << "Record your entry: ";
    std::cin.ignore();//delete new line buffer
    std::getline(std::cin, str);//use getline to store multiple words into 'str' instead of one
    q.push(str);
}

void Queue::isEmpty() {
    if(q.empty()){
        std::cout << "Forum empty! Prompt the discussion!";
    }else{
        std::cout << "Forum is not empty.";
    }
}

void Queue::selection() {

}

void Queue::queuePrint() {
    std::queue <std::string> q2; //temp queue to store original queue values
    q2 = q;
    while(!q2.empty()){
        std::cout << q2.front() << std::endl;
        q2.pop();
    }
}
