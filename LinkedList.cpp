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

	void insert_front(T value) {
		Node<T> *newNode = nullptr;

		if (this->headNode == nullptr) {
			//cout << "is nullptr.\n";
			newNode = new Node<T>(value, nullptr);
		}
		else {
			//cout << "not nullptr. For value: "<< to_string(value) <<". headNode deref: " << (*headNode).get_data() << endl;
			newNode = new Node<T>(value, headNode);
		}

		this->headNode = newNode;
	}

	void insert_back(T value) {
		Node<T>* backNode = nullptr;
		Node<T>* currentNodeToCheck = headNode;

		bool foundBack = false;

		while (!foundBack) {
			if (currentNodeToCheck->get_next_node_ptr() == nullptr) {
				backNode = currentNodeToCheck;
				foundBack = true;
			}
			else {
				currentNodeToCheck = currentNodeToCheck->get_next_node_ptr();
			}
		}

		Node<T>* newNode = new Node<T>(value, nullptr);
		backNode->set_next_node_ptr(newNode);
	}

	Node<T>& get_front() {
		if (headNode == nullptr) {
			cerr << "ERROR: Cannot get front of empty LinkedList.\n";
			throw runtime_error("LinkedList is empty.");
			return Node<T>(T(), nullptr);
		}

		//cout << "Getting headnode with value: " << (*headNode).get_data() << ". nextNode dereffed: " << headNode->get_next_node_ptr()->get_data() << endl;
		return *headNode;
	}

	void remove_front() {
		if (headNode == nullptr) {
			cerr << "ERROR: Cannot remove front of empty LinkedList.\n";
			throw runtime_error("LinkedList is empty.");
			return;
		}

		Node<T> *nextHeadNode = headNode->get_next_node_ptr();

		//delete headNode;
		//cout << "\n Remove called. Next head node deref value: " << (*nextHeadNode).get_data() << endl;

		headNode = nextHeadNode;
	}

private:
	Node<T> *headNode;
};