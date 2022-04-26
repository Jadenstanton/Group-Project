//
// Created by Jaden Stanton on 4/19/22.
//
/* By Ka'Pri Burden*/
#ifndef DIVERSITYEQUITYINLCUSION_QUEUE_H
#define DIVERSITYEQUITYINLCUSION_QUEUE_H
#include <queue>

class Queue {
public:
    void queuePush();
    //function to push elements to queue
    void isEmpty();
    //function to check if queue is full or empty
    void selection();
    //function for selection
    void queuePrint();
    //function to print queue
private:
    std::queue<std::string> q;
};


#endif //DIVERSITYEQUITYINLCUSION_QUEUE_H
