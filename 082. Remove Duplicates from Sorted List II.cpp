//C++ Code
//Title      Remove Duplicates from Sorted List II
//Difficulty Medium

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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        
        ListNode *current = head, *previous, *newCurrent = new ListNode(0);
        ListNode *newHead = newCurrent;
        
        while(current != NULL && current->next != NULL)
        {
            if(current->val != current->next->val)
            {
                if(current == head || current->val != previous->val)
                {
                    ListNode *newNode = new ListNode(current->val);
                    newCurrent->next = newNode;
                    newCurrent = newNode;
                }
            }
            
            previous = current;
            current = current->next;
        }
        if(current->val != previous->val)
        {
            ListNode *newNode = new ListNode(current->val);
            newCurrent->next = newNode;
            newCurrent = newNode;
        }
        
        return newHead->next;
    }
};
