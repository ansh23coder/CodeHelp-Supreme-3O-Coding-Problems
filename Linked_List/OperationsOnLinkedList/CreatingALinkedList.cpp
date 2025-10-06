#include <iostream>
#include <vector>
using namespace std;

// Definition of a Node class for singly linked list
class Node {
public:
    int data;     // Value stored in the node
    Node* next;   // Pointer to the next node

    // Constructor with both data and next pointer
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    // Constructor with data only, next is set to nullptr
    Node(int data1) {
        data = data1;
        next = nullptr;
    }

    // Optional: Destructor for cleanup
    ~Node() {
        cout << "Deleting node with data: " << data << '\n';
    }
};

int main() {
    vector<int> arr = {2, 5, 8, 7};

    // Creating the first node with first element of array
    Node* y = new Node(arr[0]);

    // Output the memory address of node y
    cout << "Address of node y: " << y << '\n';

    // Output the data stored in node y
    cout << "Data in node y: " << y->data << '\n';

    // Optional: Clean up the allocated memory
    delete y;

    return 0;
}
// output:
// Address of node y: 0x10c19b0
// Data in node y: 2
// Deleting node with data: 2
