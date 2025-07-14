// https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/


/*
// With BIT MANIPULATION
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int ans= 0;
        while(head != nullptr){
            ans = (ans << 1) | head -> val;
            head = head -> next;
        }
        return ans;
    }
};

// Without BIT MANIPULATION
// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int result = head->val;
        while (head->next) {
            result = result * 2 + head->next->val;
            head = head->next;
        }
        return result;
    }
};
*/