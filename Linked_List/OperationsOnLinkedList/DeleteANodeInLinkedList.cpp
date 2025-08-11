#include <iostream>
using namespace std;

// Node class definition
class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

// Function to traverse and print the linked list
void traverseAndPrint(Node* head) {
    Node* currentNode = head;
    while (currentNode) {
        cout << currentNode->data << " -> ";
        currentNode = currentNode->next;
    }
    cout << "null" << endl;
}
// Function to delete a specific node from the list
Node* deleteSpecificNode(Node* head, Node* nodeToDelete) {
    // If the node to delete is the head
    if (head == nodeToDelete) {
        Node* newHead = head->next;
        delete head;
        return newHead;
    }

    Node* currentNode = head;
    // Traverse to find the node right before the one to delete
    while (currentNode->next && currentNode->next != nodeToDelete) {
        currentNode = currentNode->next;
    }
    
    // If node wasn't found, return original head
    if (currentNode->next == nullptr) {
        return head;
    }
    // Skip over the node to delete
    Node* temp = currentNode->next;
    currentNode->next = currentNode->next->next;
    delete temp;

    return head;
}

int main() {
    // Creating nodes
    Node* node1 = new Node(7);
    Node* node2 = new Node(11);
    Node* node3 = new Node(3);
    Node* node4 = new Node(2);
    Node* node5 = new Node(9);

    // Linking nodes
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    cout << "Before deletion:\n";
    traverseAndPrint(node1);

    // Delete node4 (which holds value 2)
    node1 = deleteSpecificNode(node1, node4);

    cout << "\nAfter deletion:\n";
    traverseAndPrint(node1);

    // Clean up memory
    deleteSpecificNode(node1, node5);
    deleteSpecificNode(node1, node3);
    deleteSpecificNode(node1, node2);
    deleteSpecificNode(node1, node1); // Now node1 is last remaining node
    return 0;
}
/*
output:
Before deletion:
7 -> 11 -> 3 -> 2 -> 9 -> null

After deletion:
7 -> 11 -> 3 -> 9 -> null
*/ 