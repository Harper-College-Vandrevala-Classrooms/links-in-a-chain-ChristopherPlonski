#include <iostream>

#include "Node.cpp"

using namespace std;

template<typename T>
class LinkedList {
	
public:
	LinkedList() {
		this->headNode = nullptr;
	}

	void insert(T value) {
		Node<T> *newNode = nullptr;

		if (this->headNode == nullptr) {
			newNode = new Node<T>(value, nullptr);
		}
		else {
			newNode = new Node<T>(value, &(*headNode));
		}

		this->headNode = newNode;
	}

	T get_front() {
		if (headNode == nullptr) {
			cerr << "Cannot get front of empty LinkedList.\n";
			throw;
			return NULL;
		}

		return headNode->get_value();
	}

	void remove_front() {
		if (headNode == nullptr) {
			cerr << "Cannot remove front of empty LinkedList.\n";
			throw;
			return;
		}

		Node<T> *nextHeadNode = headNode->get_next_node_ptr();

		//delete headNode;

		headNode = nextHeadNode;
	}

private:
	Node<T> *headNode;
};