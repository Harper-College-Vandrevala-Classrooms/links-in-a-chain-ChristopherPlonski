
template<typename T>

class Node {

public:
	Node(T value, Node<T> *nextNodePtr) {
		this->value = value;
		this->nextNodePtr = nextNodePtr;
	}
	~Node() {
		delete nextNodePtr;
	}

	T get_value() {
		return this->value;
	}

	Node<T>* get_next_node_ptr() {
		return this->nextNodePtr;
	}

private:
	T value;
	Node<T> *nextNodePtr;

};