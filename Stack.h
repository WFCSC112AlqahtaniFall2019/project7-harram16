//
// Created by Addie Harrison on 11/13/19.
//

#ifndef PROJECT7_STACK_H
#define PROJECT7_STACK_H
#include <iostream>
using namespace std;
#include <fstream>
#include <string>

#include "LinkedList.h"

class Stack:public LinkedList {//derived from LinkedList
public:
    Stack();
    void push_head(Data object);
    bool pop_head(Data d);
    //Data print(ostream &os);
};


#endif //PROJECT7_STACK_H
