// C++  program to illustrate creation and traversal of Circular Linked List

#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = nullptr;
    }
};
void printList(Node* last){
    if (last == NULL) return;

    Node* head = last -> next;
    while(true){
        cout << head -> data << " ";
        head = head -> next;
        if(head == last -> next){
            break;
        }
    }
    cout << endl;
}
int main(){
    Node* first = new Node (2);
    first -> next = new Node(3);
    first -> next -> next = new Node(4);
    Node* last = first -> next -> next;
    last -> next= first;
    printList(last);
}
