class Node{
	public:
		int info;
		Node *next;
};

class LinkedList{
	private:
		Node *HEAD;
		Node *TAIL;
	public:
		LinkedList();
		~LinkedList();
		bool isEmpty();
		void addToHead(int data);
		void add(int data, Node* &predecessor);
		void addToTail(int data);
		void removeFromHead();
		void remove(int data);
		bool retrieve( int data , Node* &outputptr);
		
		void traverse();
};
