//C++ Code
//Title      Partition List
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
    ListNode* partition(ListNode* head, int x) {
        if(head == NULL || head->next == NULL)
            return head;
        
        ListNode *insertNode = NULL, *current = head, *previous;
        ListNode *newHead = new ListNode(0);
        newHead->next = head;
        while(current != NULL)
        {
            if(insertNode)
            {
                if(current->val < x)
                {
                    ListNode *newNode = new ListNode(current->val);
                    ListNode *temp = insertNode->next;
                    insertNode->next = newNode;
                    insertNode = newNode;
                    insertNode->next = temp;
                    
                    temp = current;
                    previous->next = current->next;
                    current = previous;
                    delete temp;
                    temp = NULL;
                }
            }
            else
            {
                if(current->val >= x)
                    insertNode = newHead;
                else if(current->next != NULL && current->next->val >= x)
                    insertNode = current;
            }
            previous = current;
            current = current->next;
        }
        
        return newHead->next;
    }
};
