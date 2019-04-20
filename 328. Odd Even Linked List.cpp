//C++ Code
//Title      Odd Even Linked List
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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL)
            return head;
        
        ListNode *current = head->next, *split = head;
        while(current != NULL)
        {
            if(current->next == NULL)
                break;
            ListNode *temp = current->next;
            current->next = current->next->next;
            temp->next = split->next;
            split->next = temp;
            
            current = current->next;
            split = split->next;
        }
        return head;
    }
};
