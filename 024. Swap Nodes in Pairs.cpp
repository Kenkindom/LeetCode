//C++ Code
//Title      Swap Nodes in Pairs
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
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head->next == NULL) return head;
        ListNode *newNode = new ListNode(0);
        ListNode *pre = newNode, *temp1 = head, *temp2 = head->next;
        
        while(temp1 != NULL && temp2 != NULL)
        {
            pre->next = temp2;
            temp1->next = temp2->next;
            temp2->next = temp1;
            if(temp1->next == NULL)
            {
                temp1 = NULL;
                temp2 = NULL;
            }
            else
            {
                pre = temp1;
                temp1 = temp1->next;
                temp2 = temp1->next;
            }
        }
        
        return newNode->next;
    }
};
