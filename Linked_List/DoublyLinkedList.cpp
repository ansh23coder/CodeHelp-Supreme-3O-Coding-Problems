// C++  program to illustrate creation and traversal of doubly Linked List

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
    while (curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}
void backwardTraversal(Node* tail) {
    Node* curr = tail;
    while (curr != nullptr) {
        cout << curr->data << " ";
        curr = curr->prev;
    }
    cout << endl;
}
int main() {
	//Linked List 1 <-> 2 <-> 3
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);

    head->next = second;
    second->prev = head;
    second->next = third;
    third->prev = second;

    cout << "Forward Traversal:" << endl;
    forwardTraversal(head);

    cout << "Backward Traversal:" << endl;
    backwardTraversal(third);

    return 0;
}