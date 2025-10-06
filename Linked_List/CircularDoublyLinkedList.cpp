// C++  program to illustrate creation and traversal of doubly circular Linked List

#include <iostream>
using namespace std;

struct Node {
    int data; 
    Node* next; 
    Node* prev; 
  
    Node(int x) {
      data = x;
      next = nullptr;
      prev = nullptr;
      
    }
};
void forwardTraversal(Node* head) {
    Node* curr = head;
    do {
        cout << curr->data << " ";
        curr = curr->next;
    } while (curr != head);
    cout << endl;
}
void backwardTraversal(Node* head) {
    Node* curr = head->prev;
    do {
        cout << curr->data << " ";
        curr = curr->prev;
    } while (curr->next != head);
    cout << endl;
}
int main() { 
	// Create a doubly circular linked list 
	// 1 <-> 2 <-> 3 <-> 1
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;
    third->next = head; 
    head->prev = third; 

    cout << "Forward Traversal:" << endl;
    forwardTraversal(head);

    cout << "Backward Traversal:" << endl;
    backwardTraversal(head);

    return 0;
}