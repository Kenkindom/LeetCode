//C++ Code
//Title      Remove Duplicates from Sorted List
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;
        
        ListNode *previous = head, *current = head->next;
        
        while(current != NULL)
        {
            if(current->val == previous->val)
            {
                ListNode *deleteNode = current;
                current = current->next;
                previous->next = current;
                delete deleteNode;
                deleteNode = NULL;
            }
            else
            {
                previous = current;
                current = current->next;
            }
        }
        
        return head;
    }
};
