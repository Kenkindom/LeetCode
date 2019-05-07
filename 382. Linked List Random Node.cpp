//C++ Code
//Title      Linked List Random Node
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
    /** @param head The linked list's head.
        Note that the head is guaranteed to be not null, so it contains at least one node. */
    Solution(ListNode* head) {
        ListNode *current = head;
        while(current != NULL)
        {
            list.push_back(current->val);
            current = current->next;
        }
    }
    
    /** Returns a random node's value. */
    int getRandom() {
        int index = rand() % list.size();
        return list[index];
    }
private:
    vector<int> list;
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */
