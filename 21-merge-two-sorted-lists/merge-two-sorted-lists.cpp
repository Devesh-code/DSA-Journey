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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
          // Create a dummy node to serve as the head of the merged list.
    ListNode* dummy = new ListNode(0);
    // Initialize a tail pointer to the dummy node.
    ListNode* tail = dummy;

    // While both l1 and l2 are not empty.
    while (l1 && l2) {
        // Compare the values of the current nodes in l1 and l2.
        if (l1->val < l2->val) {
            // Append the node from l1 to the merged list.
            tail->next = l1;
            // Move the tail to the appended node.
            tail = l1;
            // Move to the next node in l1.
            l1 = l1->next;
        } else {
            // Append the node from l2 to the merged list.
            tail->next = l2;
            // Move the tail to the appended node.
            tail = l2;
            // Move to the next node in l2.
            l2 = l2->next;
        }
    }

    // If l1 is not empty, append the remaining nodes from l1.
    if (l1) {
        tail->next = l1;
    }

    // If l2 is not empty, append the remaining nodes from l2.
    if (l2) {
        tail->next = l2;
    }

    // Return the merged list, starting from the node after the dummy node.
    return dummy->next;
    }
};