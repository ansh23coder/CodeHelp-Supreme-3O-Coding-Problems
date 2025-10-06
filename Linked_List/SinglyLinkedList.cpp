// C++  program to illustrate creation and traversal of Singly Linked List

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
void printList(Node* curr) {
  
    // Iterate till n reaches NULL
    while ( curr != nullptr) {
      
        cout << curr->data << " ";
        curr = curr->next;
    }
}
int main() {	
  	//Linked List 1 -> 2 -> 3
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(5);

    head->next = second;
    second->next = third;
    third->next = fourth;

    cout << "Elements in a node are: ";
    printList(head);

    return 0;
}
// output :
// Elements in a node are: 1 2 3 5 


/* another way to declare and print singly linked list - Using a while Loop in Main (Without a Separate Print Function) */

#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};
int main() {
    Node* head = nullptr;

    // Create nodes and link them
    Node* first = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(5);

    // Link nodes
    first->next = second;
    second->next = third;
    third->next = fourth;
    head = first; // Set the head pointer to the first node

    // Print the linked list directly in main
    Node* current = head;
    cout << "Elements in the linked list are: ";
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    return 0;
}
