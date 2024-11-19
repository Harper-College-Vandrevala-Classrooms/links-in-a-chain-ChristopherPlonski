#include <iostream>
#include <cassert>
#include "LinkedList.cpp"

using namespace std;

class ChainLink {
private:
    string color;

public:
    ChainLink() { 
        // Default value.
        this->color = "Black";
    }
    ChainLink(string color) {
        this->color = color;
    }

    string get_color() {
        return this->color;
    }
};

int main() {
	cout << "Starting tests.\n";

    //LinkedList<ChainLink> chainLinkLinkedList = LinkedList<ChainLink>();

    //cout << "1" << endl;
    //chainLinkLinkedList.insert(ChainLink("White"));
    //chainLinkLinkedList.insert(ChainLink("Yellow"));
    //chainLinkLinkedList.insert(ChainLink("Red"));

    //cout << "2" << endl;
    //assert(chainLinkLinkedList.get_front().get_data().get_color() == "Red");
    //chainLinkLinkedList.remove_front();
    //cout << "3" << endl;
    //assert(chainLinkLinkedList.get_front().get_data().get_color() == "Yellow");
    //cout << "3.2\n";
    //chainLinkLinkedList.remove_front();
    //cout << "3.5" << endl;
    //assert(chainLinkLinkedList.get_front().get_data().get_color() == "White");
    //cout << "4" << endl;
    //chainLinkLinkedList.remove_front();
    ////chainLinkLinkedList.remove_front(); // Should throw an error

    cout << "Test:\n";
    LinkedList<int> linkedList = LinkedList<int>();
    linkedList.insert(1);
    linkedList.insert(2);
    linkedList.insert(3);
    
    cout << "Test2:\n";
    assert(linkedList.get_front().get_data() == 3);
    assert(linkedList.get_front().get_next_node_ptr()->get_data() == 2);
    //linkedList.remove_front();
    //cout << linkedList.get_front().get_data() << endl;
    assert(linkedList.get_front().get_data() == 2);


	cout << "Test completed.\n";
}