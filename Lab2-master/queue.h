#include "List.h"

class Queue{
    public:
        Queue();
        ~Queue();
        
        void enqueue(int element);
        int dequeue();
        bool isEmpty();
        bool isFull();
        int front();
        int back();
    
    private:
    	Node* queue;
        
};
