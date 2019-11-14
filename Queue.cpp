//
// Created by Addie Harrison on 11/13/19.
//

#include "Queue.h"
Queue::Queue(){
    head=nullptr;
    tail=nullptr;
}
void Queue:: enqueue_tail(Data object){
    Node* current=new Node(object, nullptr);
    if(tail==nullptr){
        head=current;
        tail=current;
    }
    else{
        tail->next=current;
        tail=current;
    }

}
bool Queue:: dequeue_head(){
    Node* deleteNode=head;
    if(head !=nullptr){
        head=head->next;
        delete deleteNode;
        return true;
    }
    else{
        return false;
    }


}
