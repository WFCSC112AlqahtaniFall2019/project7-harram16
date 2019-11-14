#include <iostream>
#include <string>
#include <fstream>
#include "Data.h"
#include "Stack.h"
#include "Queue.h"
#include "SortedLinkedList.h"

using namespace std;


int main() {
    //initializing stack queue and sortedlinkedlist
   Stack* nextStack = new Stack;
   Queue* nextQueue= new Queue;
   SortedLinkedList* nextList=new SortedLinkedList;
   Data deletePayGap;

   ifstream inFile;
   ofstream outFileStack;
   ofstream outFileQueue;
   ofstream outFileSortedLinkedList;

   //opening files
   inFile.open("../GenderGap.csv");
   outFileStack.open("Stack.txt");
   outFileQueue.open("Queue.txt");
   outFileSortedLinkedList.open("SortedLinkedList");

   //making sure all of the files are opened
   if(!inFile.is_open()){
       cout<<"Gender Pay Gap File did not open.";
   }
   if(!outFileStack.is_open()){
       cout<<"Stack file did not open.";
   }
    if(!outFileQueue.is_open()){
        cout<<"Queue file did not open.";
    }
    if(!outFileSortedLinkedList.is_open()){
        cout<<"Sorted Linked List file did not open.";
    }

    cout<<"Hi"<<endl;
    while(!inFile.eof()){

        string name,meanString, medianString,numberString;
        //cout<<"Hi"<<endl;
        getline(inFile,name, ',');
        //cout << "name read " << name << endl;
        getline(inFile,numberString,',');
        //cout << "number read " << numberString << endl;
        getline(inFile,meanString, ',');
        //cout << "mean read " << meanString << endl;
        //cout<< meanString;
        getline(inFile,medianString, '\n');
        //cout << "median read " << medianString << endl;




        cout << "mean " << meanString << endl;
        double mean=stod(meanString);
        cout << "median " << medianString << endl;
        double median=stod(medianString);

        Data payGap=Data(name, median, mean, numberString);
        nextStack->push_head(payGap);
        nextQueue->enqueue_tail(payGap);
        nextList->insertSorted(payGap);
        deletePayGap=payGap;
    }

    //having the list print into the 3 output files
   nextStack->print(outFileStack);
    nextQueue->print(outFileQueue);
    nextList->print(outFileSortedLinkedList);

    //delete so no memory leakage
    while(nextStack->pop_head(deletePayGap));
    while(nextQueue->dequeue_head());

    //closing files
    inFile.close();
    outFileStack.close();
    outFileQueue.close();
    outFileSortedLinkedList.close();
    return 0;

}
