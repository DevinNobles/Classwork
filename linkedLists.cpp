#include <iostream>

using namespace std;

// Step 1: Define the node structure
struct nodeType {
    int info;            // This holds the data (can be any data type)
    nodeType *link;      // Pointer to the next node in the list
};

// Step 2: Declare the head of the linked list
nodeType *head = nullptr;

int main() {
    // Step 3: Create nodes and link them
    nodeType *node1 = new nodeType; // Allocate memory for the first node
    node1->info = 10;               // Assign value to the node
    node1->link = nullptr;          // Initially, the link points to null

    nodeType *node2 = new nodeType; // Allocate memory for the second node
    node2->info = 20;
    node2->link = nullptr;          // Last node will point to null

    // Step 4: Link the nodes
    node1->link = node2;            // First node points to the second

    // Step 5: Set the head pointer to the first node
    head = node1;

    // Step 6: Traverse and print the linked list
    nodeType *current = head;       // Start at the head
  
    while (current != nullptr) {
        cout << current->info << " -> ";
        current = current->link;
    }
    cout << "nullptr" << endl;      // To show the end of the list

    return 0;
}
