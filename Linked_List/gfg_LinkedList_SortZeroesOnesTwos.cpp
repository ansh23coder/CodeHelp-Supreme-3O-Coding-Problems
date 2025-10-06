// https://www.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1

/* Node is defined as
  class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};
*/
class Solution {
  public:
    Node* segregate(Node* head) {
        // code here
        // Dummy nodes for 0s, 1s, and 2s
        Node* zeroD = new Node(0);
        Node* oneD = new Node(0);
        Node* twoD = new Node(0);

        // Tails for each list
        Node* zero = zeroD;
        Node* one = oneD;
        Node* two = twoD;

        // Traverse and distribute nodes
        Node* curr = head;
        while (curr != nullptr) {
            if (curr->data == 0) {
                zero->next = curr;
                zero = zero->next;
            } else if (curr->data == 1) {
                one->next = curr;
                one = one->next;
            } else {
                two->next = curr;
                two = two->next;
            }
            curr = curr->next;
        }

        // Connect the three lists
        zero->next = (oneD->next) ? oneD->next : twoD->next;
        one->next = twoD->next;
        two->next = nullptr;

        // Head of the new list
        Node* sortedHead = zeroD->next;

        // Clean up dummy nodes
        delete zeroD;
        delete oneD;
        delete twoD;

        return sortedHead;
    }
};