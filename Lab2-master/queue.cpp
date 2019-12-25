#include <iostream>
#include "queue.h"

Queue::Queue(){
    queue=NULL;
}

Queue::~Queue(){
    
}

bool Queue::isEmpty(){
    if(queue==NULL){
        return true;
    }
    else{
        return false;
    }
}

void Queue::enqueue(int element){
    Node* newNode= new Node();
    newNode->info=element;
    if(isEmpty()){
        newNode->next=newNode;
        queue=newNode;
    }
    else{
        newNode->next=queue->next;
        queue->next=newNode;
        queue=newNode;
    }
}

int Queue::dequeue(){
    if(isEmpty()){
        std::cout<<"Queue Underflow"<<std::endl;
    }
    else{
    	Node* f=queue->next;
        int data=f->info;
        queue->next=f->next;
        if(f==queue){
            queue=NULL;
        }
        return data;
    }
}

int Queue::front(){
    if(isEmpty()){
        std::cout<<"Queue Underflow"<<std::endl;
    }
    else{
        return queue->next->info;
    }
}

int Queue::back(){
    if(isEmpty()){
        std::cout<<"Queue Underflow"<<std::endl;
    }
    else{
        return queue->info;
    }
}

int main(){
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(6);
    
    std::cout<<"The front element "<<q.front()<<std::endl;
    std::cout<<"The back element "<<q.back()<<std::endl;
    
    std::cout<<"Dequeued: "<<q.dequeue()<<std::endl;
    std::cout<<"Dequeued: "<<q.dequeue()<<std::endl;
    std::cout<<"Dequeued: "<<q.dequeue()<<std::endl;
    std::cout<<"Dequeued: "<<q.dequeue()<<std::endl;
    std::cout<<"Dequeued: "<<q.dequeue()<<std::endl;
    std::cout<<"Dequeued: "<<q.dequeue()<<std::endl;
    std::cout<<"Dequeued: "<<q.dequeue()<<std::endl;
}
