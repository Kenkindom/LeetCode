//C++ Code
//Title      Add Two Numbers
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *end = new ListNode(0);
        int sum = 0, carry = 0;
        ListNode *temp = end;
        
        while(l1 || l2 || carry > 0)
        {
            if(l1 == NULL && l2 == NULL)
            {
                sum = carry;
            }
            else if(l1 == NULL)
            {
                sum = l2->val + carry;
                l2 = l2->next;
            }
            else if(l2 == NULL)
            {
                sum = l1->val + carry;
                l1 = l1->next;
            }
            else
            {
                sum = l1->val + l2->val + carry;
                l1 = l1->next;
                l2 = l2->next;
            }
            carry = sum / 10;
            temp->next = new ListNode(sum%10);
            temp = temp->next;
            cout << temp->val << " ";
            
        }
        return end->next;
    }
};
