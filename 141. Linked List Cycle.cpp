//C++ Code
//Title      Linked List Cycle
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
    bool hasCycle(ListNode *head) {
        vector<ListNode*> node;
        ListNode *current = head;
        while(current != NULL)
        {
            for(int i = 0; i < node.size(); i++)
            {
                if(current == node[i])
                    return true;
            }
            node.push_back(current);
            current = current->next;
        }
        
        return false;
    }
};
