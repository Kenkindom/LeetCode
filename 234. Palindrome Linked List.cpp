//C++ Code
//Title      Palindrome Linked List
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
    bool isPalindrome(ListNode* head) {
        if(head == NULL)
            return true;
        
        vector<int> stack;
        ListNode *current = head;
        while(current != NULL)
        {
            stack.push_back(current->val);
            current = current->next;
        }
        
        int i, j;
        if(stack.size() % 2 == 1)
        {
            i = stack.size() / 2 - 1;
            j = stack.size() / 2 + 1;
        }
        else
        {
            i = stack.size() / 2 - 1;
            j = stack.size() / 2;
        }
        
        while(i >= 0)
        {
            if(stack[i] != stack[j])
                return false;
            i--;
            j++;
        }
        
        return true;
    }
};
