//C++ Code
//Title      Intersection of Two Linked Lists
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *currentA = headA, *currentB = headB;
        vector<ListNode*> node;
        while(currentA != NULL)
        {
            node.push_back(currentA);
            currentA = currentA->next;
        }
        
        while(currentB != NULL)
        {
            for(int i = 0; i < node.size(); i++)
            {
                if(currentB == node[i])
                    return currentB;
            }
            
            currentB = currentB->next;
        }
        
        return NULL;
    }
};
