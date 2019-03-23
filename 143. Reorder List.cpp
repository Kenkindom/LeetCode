//C++ Code
//Title      Reorder List
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
    void reorderList(ListNode* head) {
        ListNode *current = head;
        while(current != NULL)
        {
            reorder(current);
            current = current->next;
            if(current != NULL)
                current = current->next;
        }
    }
    
    void reorder(ListNode *head)
    {
        ListNode *current = head, *previous = head;
        
        while(current != NULL && current->next != NULL)
        {
            previous = current;
            current = current->next;
        }
        
        if(previous == head)
            return;
        current->next = head->next;
        head->next = current;
        previous->next = NULL;
    }
};
