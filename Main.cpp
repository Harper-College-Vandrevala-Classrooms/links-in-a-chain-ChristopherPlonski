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

    LinkedList<ChainLink> chainLinkLinkedList = LinkedList<ChainLink>();

    chainLinkLinkedList.insert(ChainLink("White"));
    chainLinkLinkedList.insert(ChainLink("Yellow"));
    chainLinkLinkedList.insert(ChainLink("Red"));

    assert(chainLinkLinkedList.get_front().get_data().get_color() == "Red");
    assert(chainLinkLinkedList.get_front().get_next_node_ptr()->get_data().get_color() == "Yellow");
    assert(chainLinkLinkedList.get_front().get_next_node_ptr()->get_next_node_ptr()->get_data().get_color() == "White");
    assert(chainLinkLinkedList.get_front().get_next_node_ptr()->get_next_node_ptr()->get_next_node_ptr() == nullptr);
    chainLinkLinkedList.remove_front();
    assert(chainLinkLinkedList.get_front().get_data().get_color() == "Yellow");
    assert(chainLinkLinkedList.get_front().get_next_node_ptr()->get_data().get_color() == "White");
    assert(chainLinkLinkedList.get_front().get_next_node_ptr()->get_next_node_ptr() == nullptr);
    chainLinkLinkedList.remove_front();
    assert(chainLinkLinkedList.get_front().get_data().get_color() == "White");
    assert(chainLinkLinkedList.get_front().get_next_node_ptr() == nullptr);
    chainLinkLinkedList.remove_front();
    //chainLinkLinkedList.remove_front(); // Should throw an error


    // Tests list with other typess

    LinkedList<int> linkedList = LinkedList<int>();
    linkedList.insert(1);
    linkedList.insert(2);
    linkedList.insert(3);
    
    assert(linkedList.get_front().get_data() == 3);
    assert(linkedList.get_front().get_next_node_ptr()->get_data() == 2);
    assert(linkedList.get_front().get_next_node_ptr()->get_next_node_ptr()->get_data() == 1);
    assert(linkedList.get_front().get_next_node_ptr()->get_next_node_ptr()->get_next_node_ptr() == nullptr);
    linkedList.remove_front();
    assert(linkedList.get_front().get_data() == 2);
    assert(linkedList.get_front().get_next_node_ptr()->get_data() == 1);
    assert(linkedList.get_front().get_next_node_ptr()->get_next_node_ptr() == nullptr);
    linkedList.remove_front();
    assert(linkedList.get_front().get_data() == 1);
    assert(linkedList.get_front().get_next_node_ptr() == nullptr);
    linkedList.remove_front();
    //linkedList.get_front(); // Should throw error, nothing to get.


	cout << "Test completed.\n";
}