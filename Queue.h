//
// Created by Addie Harrison on 11/13/19.
//

#ifndef PROJECT7_QUEUE_H
#define PROJECT7_QUEUE_H
#include "LinkedList.h"

class Queue:public LinkedList {//derived from LinkedList
public:
    Queue();
    void enqueue_tail(Data object);
    bool dequeue_head();

private:
    Node* tail;
};


#endif //PROJECT7_QUEUE_H
