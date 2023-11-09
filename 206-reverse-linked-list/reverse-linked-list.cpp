/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
         ListNode* prev = nullptr;  // Initialize a pointer to the previous node as nullptr.
    ListNode* curr = head;     // Initialize a pointer to the current node as the head.

    while (curr) {
        ListNode* nxt = curr->next;  // Store the next node in 'nxt' to avoid losing the reference.

        curr->next = prev;  // Reverse the 'next' pointer of the current node to point to the previous node.

        prev = curr;  // Move the 'prev' pointer to the current node.
        curr = nxt;  // Move the 'curr' pointer to the next node.

        // The order of the above operations effectively reverses the linked list.

    }

    return prev;  // Return the new head of the reversed list.
        
    }
};