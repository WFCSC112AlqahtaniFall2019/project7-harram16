//
// Created by Addie Harrison on 11/13/19.
//

#include "SortedLinkedList.h"

void SortedLinkedList::insertSorted(Data object) {
    Node * temp = new Node(object,nullptr);
    //if(head->data.companyName==""){
    if(this->head == nullptr ){
        this->head= temp;//new Node(object, nullptr);
    }
    else{
        Node* current=head;
        Node* previous=nullptr;
        Node* newNode= new Node(object, nullptr);

        //checking the first position
        if(current->data > newNode->data){
            newNode->next=head;
            head=newNode;
            return;
        }
        //if not first position has to search for the correct position

        //moving pointers to next in the list
        previous=current;
        current=current->next;

        while(current){
            //if the new info is larger than moves pointer to the next
            if(current->data<newNode->data){
                previous=current;
                current=current->next;
            } else {
                break;
            }

        }
        //if the current is not larger it exist the while loop and is inserted into the list
        Node* temp=current;
        newNode->next=current;
        previous->next=newNode;


    }

}