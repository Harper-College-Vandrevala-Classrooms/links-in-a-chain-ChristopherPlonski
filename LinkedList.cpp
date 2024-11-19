#include <iostream>
#include <string>

#include "Node.cpp"

using namespace std;

template<typename T>
class LinkedList {
	
public:
	LinkedList() {
		this->headNode = nullptr;
	}

	void insert(int value) {
		Node<T> *newNode = nullptr;

		if (this->headNode == nullptr) {
			cout << "is nullptr.\n";
			newNode = new Node<T>(value, nullptr);
		}
		else {
			cout << "not nullptr. For value: "<< to_string(value) <<". headNode deref: " << (*headNode).get_data() << endl;
			newNode = new Node<T>(value, headNode);
			//newNode = new Node<T>(value, &(*headNode));
		}

		this->headNode = newNode;
	}

	Node<T> get_front() {
		//if (headNode == nullptr) {
		//	cerr << "Cannot get front of empty LinkedList.\n";
		//	throw runtime_error("LinkedList is empty.");
		//	return Node<T>(T(), nullptr);
		//}

		cout << "Getting headnode with value: " << (*headNode).get_data() << ". nextNode dereffed: " << headNode->get_next_node_ptr()->get_data() << endl;
		return *headNode;
	}

	void remove_front() {
		//if (headNode == nullptr) {
		//	cerr << "Cannot remove front of empty LinkedList.\n";
		//	throw runtime_error("LinkedList is empty.");
		//	return;
		//}

		Node<T> *nextHeadNode = headNode->get_next_node_ptr();

		//delete headNode;

		headNode = nextHeadNode;
	}

private:
	Node<T> *headNode;
};