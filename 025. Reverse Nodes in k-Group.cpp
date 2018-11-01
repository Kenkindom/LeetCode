//C++ Code
//Title      Reverse Nodes in k-Group
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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *temp = head;
        int nodeNumber = 0;
        while(temp != NULL)
        {
            nodeNumber++;
            temp = temp->next;
        }
        if(nodeNumber < k) return head;
        
        ListNode *newNode = new ListNode(0);
        newNode->next = head;
        ListNode *headTemp = head, *pre = newNode;
        
        while(nodeNumber >= k)
        {
            ListNode *nextReverse = headTemp;
            // find next reverse start node
            for(int ii = 0; ii < k; ii++)
            {
                nextReverse = nextReverse->next;
            }
            
            // reverse node
            ListNode *cur = headTemp, *nextTempNode = nextReverse, *preTemp = pre;
            for(int ii = 0; ii < k; ii++)
            {
                if(ii == 0) preTemp = cur;
                ListNode *temp1 = headTemp->next;
                headTemp->next = nextTempNode;
                nextTempNode = headTemp;
                if(ii == k - 1) pre->next = headTemp;
                else headTemp = temp1;
            }
            
            pre = preTemp;
            headTemp = nextReverse;
            nodeNumber -= k;
        }
        
        return newNode->next;
    }
};
