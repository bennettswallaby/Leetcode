// Middle of the Linked List
// Given the head of a singly linked list, return the middle node of the linked list.
// https://leetcode.com/problems/middle-of-the-linked-list/

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Middle of the Linked List.
// Memory Usage: 7.2 MB, less than 22.04% of C++ online submissions for Middle of the Linked List.


class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* step1 = head;
        ListNode* step2 = head;
        
        
        while(step2!=NULL && step2->next!=NULL){
            step1 = step1->next;
            step2 = step2->next->next;
        }
        
        return step1;
    }
};
