//C++ Code
//Title      Reverse Linked List II
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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if(head == NULL)
            return head;
        if(m == n)
            return head;
        
        ListNode *current = head, *previous = new ListNode(0);
        previous->next = head;
        int index = 1;
        while(index < m)
        {
            if(index == m-1)
                previous = current;
            current = current->next;
            index++;
        }
        
        ListNode *reverseNode = current, *reverseEnd, *temp;
        while(index <= n)
        {
            if(index == n)
                reverseEnd = current;
            current = current->next;
            index++;
        }
        
        while(reverseNode != reverseEnd)
        {
            temp = reverseNode;
            reverseNode = reverseNode->next;
            temp->next = current;
            current = temp;
        }
        reverseNode->next = current;
        if(previous->next == head)
            head = reverseEnd;
        previous->next = reverseNode;
        
        return head;
    }
};
