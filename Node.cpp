
#include <iostream>

template<typename T>

class Node {

public:
	Node(int data, Node<T> *nextNodePtr) {
		cout << "Creating node with data: " << data << endl;
		this->data = data;
		this->nextNodePtr = nextNodePtr;
	}
	~Node() {
		delete nextNodePtr;
	}

	int get_data() {
		cout << "Returning data:" << this->data << endl;
		return this->data;
	}

	Node<T>* get_next_node_ptr() {
		return this->nextNodePtr;
	}

private:
	int data;
	Node<T> *nextNodePtr;

};