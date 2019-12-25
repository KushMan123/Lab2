#include <iostream>
#include "stack.h"

Stack::Stack(){
	stack=NULL;
	top=NULL;
}

Stack::~Stack(){
	
}

bool Stack::isEmpty(){
	if(stack==NULL){
		return true;	
	}
	else{
		return false;
	}
}

void Stack::push(int element){
	Node* newNode= new Node();
	newNode->info=element;
	if(isEmpty()){
		newNode->next=newNode;
		stack=newNode;
	}
	else{
		newNode->next=stack->next;
		stack->next=newNode;
	}
}

int Stack::pop(){
	if(isEmpty()){
		std::cout<<"Stack Underflow"<<std::endl;
	}
	else{
		top=stack->next;
		int data=top->info;
		stack->next=top->next;
		if(top==stack){
			stack=NULL;
		}
		return data;
	}
}

int Stack::peak(){
	if(isEmpty()){
		std::cout<<"Stack Underflow"<<std::endl;
	}
	else{
		top=stack->next;
		return top->info;
	}
}

int main(){
	Stack s;
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(78);
    
    std::cout<<"The top value is "<<s.peak()<<std::endl;
    
    std::cout<<"Popped value "<<s.pop()<<std::endl;
    std::cout<<"Popped value "<<s.pop()<<std::endl;
    std::cout<<"Popped value "<<s.pop()<<std::endl;
    std::cout<<"Popped value "<<s.pop()<<std::endl;
    std::cout<<"Popped value "<<s.pop()<<std::endl;
   
}
