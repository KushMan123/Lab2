#include "List.h"

class Stack{
    public:
    Stack();
    ~Stack();
    
    void push(int element);
    int pop();
    bool isEmpty();
    bool isFull();
    int peak();
    
    private:
	Node* stack;
	Node* top;
};
