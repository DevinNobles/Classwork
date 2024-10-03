#include <iostream>
using namespace std;

// Template for linked list node
template <typename T>
struct Node {
    T info;            // The data part
    Node<T>* link;     // Pointer to the next node
};

// Template for linkedListType class
template <typename T>
class linkedListType {
private:
    Node<T>* head;     // Pointer to the first node in the list

public:
    // Constructor: initialize the head pointer to nullptr
    linkedListType() {
        head = nullptr;
    }

    // Function to insert a node at the beginning of the list
    void insertFirst(T newItem) {
        Node<T>* newNode = new Node<T>; // Allocate memory for the new node
        newNode->info = newItem;        // Set the data
        newNode->link = head;           // Make new node point to the current head
        head = newNode;                 // Update head to point to the new node
    }

    // Function to display the linked list
    void displayList() {
        Node<T>* current = head;        // Start at the head
        while (current != nullptr) {
            cout << current->info << " -> ";
            current = current->link;    // Move to the next node
        }
        cout << "nullptr" << endl;      // End of the list
    }
};

int main() {
    // Create a linked list of integers
    linkedListType<int> intList;

    // Insert some integers
    intList.insertFirst(10);
    intList.insertFirst(20);
    intList.insertFirst(30);

    // Display the list
    intList.displayList();

    return 0;
}
