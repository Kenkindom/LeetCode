//C++ Code
//Title      Rotate List
//Difficulty Mediun

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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || k == 0)
            return head;
        ListNode *current = head;
        int size = 0;
        while(current != NULL)
        {
            current = current->next;
            size++;
        }
        
        k = size - (k % size);
        current = head;
        ListNode *previous = NULL;
        
        for(int i = 0; i < k; i++)
        {
            previous = current;
            current = current->next;
        }
        if(current == NULL)
            return head;
        
        previous->next = NULL;
        previous = current;
        while(current->next != NULL)
            current = current->next;
        current->next = head;
        head = previous;
        
        return head;
    }
};
