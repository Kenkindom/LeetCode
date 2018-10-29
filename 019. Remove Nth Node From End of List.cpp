//C++ Code
//Title      Remove Nth Node From End of List
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(n == 0) return head;
        ListNode *temp = head;
        
        int Number = 0;
        while(temp != NULL)
        {
            temp = temp->next;
            Number++;
        }
        
        temp = head;
        int target = Number - n + 1, step = 1;
        
        while(temp != NULL)
        {
            if(step == target-1)
            {
                temp->next = temp->next->next;
            }
            else if(target == 1 && step == 1)
            {
                head = head->next;
            }
            else if(target == Number && step == target - 1)
            {
                temp->next = NULL;
            }
            
            temp = temp->next;
            step++;
        }
        return head;
    }
};
