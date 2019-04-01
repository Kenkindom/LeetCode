//C++ Code
//Title      Remove Linked List Elements
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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *current = head, *previous = NULL;
        while(current != NULL)
        {
            if(current->val == val)
            {
                ListNode *deleteNode = current;
                if(previous == NULL)
                {
                    head = head->next;
                    current = current->next;
                }
                else
                {
                    previous->next = current->next;
                    current = current->next;
                }
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
