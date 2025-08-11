#include <iostream>
using namespace std;

class Node { // creating a node
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
void traverseAndPrint(Node* head) {
    Node* currentNode = head;
    while (currentNode != nullptr) { // or  while (currentNode) {  
        cout << currentNode->data << " -> ";
        currentNode = currentNode->next;
    }
    cout << "null" << endl;
}
int main() {
    Node* node1 = new Node(7);
    Node* node2 = new Node(3);
    Node* node3 = new Node(2);
    Node* node4 = new Node(9);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;

    cout << "Original list:" << endl;
    traverseAndPrint(node1);

    return 0;
}
/*
output: 
Original list:
7 -> 3 -> 2 -> 9 -> null
*/