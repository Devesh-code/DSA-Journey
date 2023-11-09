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
    ListNode* removeElements(ListNode* head, int val) {
        // Create a dummy node with 'next' pointing to the original 'head'.
    ListNode* dummy = new ListNode(0);
    dummy->next = head;

    // Initialize 'prev' and 'curr' pointers.
    ListNode* prev = dummy;
    ListNode* curr = head;

    while (curr) {
        ListNode* nxt = curr->next;  // Store the next node in 'nxt' to avoid losing the reference.

        if (curr->val == val) {
            prev->next = nxt;  // Update 'prev' to skip 'curr' when 'val' matches.
            delete curr;  // Free the memory occupied by the node with 'val' equal to the target value.
        } else {
            prev = curr;  // Move 'prev' to 'curr' when 'val' doesn't match.
        }

        curr = nxt;  // Move 'curr' to the next node.
    }

    return dummy->next;  // Return the new head after removal of nodes with the target value.
    }
};