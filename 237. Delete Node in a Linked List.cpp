//C++ Code
//Title      Delete Node in a Linked List
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
    void deleteNode(ListNode* node) {
        if(node == NULL || node->next == NULL)
            return;
        
        while(node != NULL)
        {
           ListNode *temp = node->next; 
           node->val = temp->val;
           if(temp->next != NULL)
               node = temp;
            else
            {
               node->next = NULL;
               return;
           }
        }
    }
};
