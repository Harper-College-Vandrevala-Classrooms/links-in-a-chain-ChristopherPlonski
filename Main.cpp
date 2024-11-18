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

    assert(chainLinkLinkedList.get_front().get_color() == "Red");
    chainLinkLinkedList.remove_front();
    assert(chainLinkLinkedList.get_front().get_color() == "Yellow");
    chainLinkLinkedList.remove_front();
    assert(chainLinkLinkedList.get_front().get_color() == "White");
    chainLinkLinkedList.remove_front();
    //chainLinkLinkedList.remove_front(); // Should throw an error

	cout << "Test completed.\n";
}