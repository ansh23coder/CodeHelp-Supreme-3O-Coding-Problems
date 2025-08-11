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

void findLowestValue(Node* head) {
    if(head == nullptr){
        cout << "list is empty.";
        return;
    }

    int minvalue = head -> data;
    Node* currentNode = head -> next;

    while (currentNode != nullptr) {
        if(currentNode->data < minvalue){
            minvalue = currentNode->data;
        } 
        currentNode = currentNode->next;
    }
    cout << minvalue;
}
int main() {
    Node* node1 = new Node(1327);
    Node* node2 = new Node(323);
    Node* node3 = new Node(2435);
    Node* node4 = new Node(912);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;

    cout << "Lowest value in linked list: ";
    findLowestValue(node1);
    return 0;
}
/*
output:
Lowest value in linked list: 323
*/