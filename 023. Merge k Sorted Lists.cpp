//C++ Code
//Title      Merge k Sorted Lists
//Difficulty Hard

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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0) return {};
        if(lists.size() == 1) return lists[0];
        
        ListNode *res;
        if(lists.size() >= 2)
        {
            res = mergeTwoLists(lists[0], lists[1]);
        }
        
        for(int ii = 2; ii < lists.size(); ii++)
        {
            res = mergeTwoLists(res, lists[ii]);
        }
        
        return res;
    }
    
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *res, *resTemp;
        
        if(l1 == NULL && l2 != NULL) return l2;
        if(l1 != NULL && l2 == NULL) return l1;
        if(l1 == NULL && l2 == NULL) return NULL;
        
        if(l1->val <= l2-> val)
        {
            res = l1;
            l1 = l1->next;
        }
        else
        {
            res = l2; 
            l2 = l2->next;
        }
        
        resTemp = res;
        
        while(l1 != NULL && l2 != NULL)
        {
            if(l1->val <= l2->val)
            {
                resTemp->next = l1;
                l1 = l1->next;
            }
            else if(l2->val < l1->val)
            {
                resTemp->next = l2;
                l2 = l2->next;
            }
            resTemp->next->next = NULL;
            resTemp = resTemp->next;
        }
        
        if(l1 != NULL) resTemp->next = l1;
        
        if(l2 != NULL) resTemp->next = l2;
        
        return res;
    }
};
