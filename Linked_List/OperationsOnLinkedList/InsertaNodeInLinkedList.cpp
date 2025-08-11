#include <iostream>
using namespace std;

class Node {
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
    while (currentNode) {
        cout << currentNode->data << " -> ";
        currentNode = currentNode->next;
    }
    cout << "null" << endl;
}
Node* insertNodeAtPosition(Node* head, Node* newNode, int position) {
    if (position == 1) {
        newNode->next = head;
        return newNode;
    }

    Node* currentNode = head;
    for (int i = 0; i < position - 2; ++i) {
        if (currentNode == nullptr) break;
        currentNode = currentNode->next;
    }

    if (currentNode != nullptr) {
        newNode->next = currentNode->next;
        currentNode->next = newNode;
    }
    return head;
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

    Node* newNode = new Node(97);
    node1 = insertNodeAtPosition(node1, newNode, 2);

    cout << "\nAfter insertion:" << endl;
    traverseAndPrint(node1);

    return 0;
}
