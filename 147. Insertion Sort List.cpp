//C++ Code
//Title      Insertion Sort List
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
    ListNode* insertionSortList(ListNode* head) {
        if(head == NULL)
            return head;
        
        ListNode *sortHead = new ListNode(head->val);
        ListNode *sortCurrent = sortHead;
        ListNode *current = head->next;
        
        while(current)
        {
            ListNode *newNode = new ListNode(current->val);
            ListNode *sortPrevious;
            
            while(sortCurrent->next)
            {
                if(sortCurrent->val > newNode->val)
                    break;
                sortPrevious = sortCurrent;
                sortCurrent = sortCurrent->next;
            }
            
            if(sortCurrent == sortHead)
            {
                if(newNode->val > sortHead->val)
                    sortHead->next = newNode;
                else
                {
                    newNode->next = sortHead;
                    sortHead = newNode;
                }
            }
            else if(sortCurrent->val > newNode->val)
            {
                sortPrevious->next = newNode;
                newNode->next = sortCurrent;
            }
            else if(sortCurrent->next == NULL)
                sortCurrent->next = newNode;
            sortCurrent = sortHead;
            current = current->next;
        }
        
        return sortHead;
    }
};
