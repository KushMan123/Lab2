#include <iostream>

#include "List.h"

LinkedList::LinkedList(){
	HEAD=NULL;
	TAIL=NULL;
}

LinkedList::~LinkedList(){
	
}

bool LinkedList::isEmpty(){
	if(HEAD==NULL and TAIL==NULL){
		return true;
	}
	else{
		return false;
	}
}

void LinkedList::addToHead(int data){
	Node* newNode= new Node();
	newNode->info=data;
	newNode->next=HEAD;
	HEAD=newNode;
	
	if(TAIL==NULL){
		TAIL=HEAD;
	}
}

void LinkedList::addToTail(int data){
	Node* newNode= new Node();
	newNode->info=data;
	newNode->next=NULL;
	TAIL->next=newNode;
	TAIL=newNode;
}

void LinkedList::add(int data, Node* &predecessor){
	Node* newNode= new Node();
	newNode->info=data;
	newNode->next=predecessor->next;
	predecessor->next=newNode;
}

void LinkedList::traverse(){
	Node* temp=HEAD;
	while(temp!=NULL){
		std::cout<<temp->info<<std::endl;;
		temp=temp->next;
	}
}

bool LinkedList::retrieve(int data, Node* &outputptr){
	Node* temp=HEAD;
	while(temp!=NULL && temp->info!=data ){
		temp=temp->next;
	}
	if (temp==NULL){
		return false;
	}
	else{
		outputptr=temp;
		return true;
	}
}

void LinkedList::removeFromHead(){
	Node* nodeToDelete= new Node();
	nodeToDelete=HEAD;
	HEAD=nodeToDelete->next;
	
}

void LinkedList::remove(int data){
	if(isEmpty()){
		return;
	}
	if(HEAD->info=data){
		removeFromHead();
		if(HEAD==NULL){
			TAIL=NULL;
		}
	}
	else{
		Node* temp= new Node();
		Node*prev= new Node();
		temp=HEAD->next;
		prev=HEAD;
		
		while (temp!=NULL){
			if(temp->info==data){
				prev->next=temp->next;
			
				if(prev->next==NULL){
				TAIL=prev;
				}
			}
			else{
				prev=prev->next;
				temp=temp->next;
			}
		}
	}
}

int main(){
	Node *p;
	LinkedList l;
	l.addToHead(15);
	l.addToHead(6);
	l.addToHead(76);
	
	l.retrieve(6,p);
	l.add(56,p);
	
	l.addToTail(6);
	l.addToTail(8);
	l.addToTail(78);
	
	l.removeFromHead();
	l.remove(76);
	
	l.traverse();
}
