//C++ Code
//Title      Reverse Linked List
//Difficulty Easy

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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL)
            return head;
        ListNode *pre = head->next, *current = head, *previous = NULL;
        while(current != NULL)
        {
            current->next = previous;
            previous = current;
            current = pre;
            if(pre == NULL)
                break;
            pre = pre->next;
        }
        head = previous;
        
        return head;
    }
};
