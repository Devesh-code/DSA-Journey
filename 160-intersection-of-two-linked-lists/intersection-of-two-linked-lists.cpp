/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
         // Check if either of the linked lists is null, in which case there's no intersection.
    if (!headA || !headB) {
        return nullptr;
    }
    
    // Initialize two pointers, a_pointer and b_pointer, to the heads of both lists.
    ListNode* a_pointer = headA;
    ListNode* b_pointer = headB;
    
    // Traverse both lists until an intersection is found or both reach the end.
    while (a_pointer != b_pointer) {
        // If a_pointer reaches the end of list A, reset it to the head of list B.
        if (!a_pointer) {
            a_pointer = headB;
        } else {
            a_pointer = a_pointer->next;
        }
        
        // If b_pointer reaches the end of list B, reset it to the head of list A.
        if (!b_pointer) {
            b_pointer = headA;
        } else {
            b_pointer = b_pointer->next;
        }
    }
    
    // If there's an intersection, a_pointer (or b_pointer) points to the intersection node.
    // If no intersection is found, they both reach nullptr and we return nullptr.
    return a_pointer;
    }
};