//
// Created by Addie Harrison on 11/13/19.
//

#include "Stack.h"
#include "Data.h"
#include "LinkedList.h"

//default constructor
Stack::Stack(){
    head=new Node();
}
void Stack:: push_head(Data object){
    Node* temp=new Node(object,nullptr);
    if(head->data.companyName=="" ){

        head=temp;
    }
    else{
        temp->next=head;
        head=temp;
    }

}
bool Stack:: pop_head(Data object){
    if(head !=nullptr){
        Node* temp=head;
        head=head->next;
        delete temp;
        return true;
    }
    else{
        return false;
    }

}
