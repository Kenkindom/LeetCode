//C++ Code
//Title      Convert Sorted List to Binary Search Tree
//Difficulty Medium

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if(head == NULL)
            return NULL;
        ListNode *cur = head;
        int size = 0;
        while(cur != NULL)
        {
            size++;
            cur = cur->next;
        }
        
        return buildBalanceBST(head, size);
    }
    
    TreeNode* buildBalanceBST(ListNode* head, int size)
    {
        if(head == NULL)
            return NULL;
        
        int mid = size / 2, count = 0;
        ListNode *cur = head, *prev = NULL;
        while(count < mid)
        {
            prev = cur;
            cur = cur->next;
            count++;
        }
        
        if(prev != NULL)
            prev->next = NULL;
        
        int leftSize = (size % 2 == 1) ? (size-1)/2 : size/2;
        int rightSize = size-1-leftSize;
        TreeNode *root = new TreeNode(cur->val);
        if(cur != head)
        {
            TreeNode *leftSub = buildBalanceBST(head, leftSize);
            TreeNode *rightSub = buildBalanceBST(cur->next, rightSize);
            root->left = leftSub;
            root->right = rightSub;
        }
        
        return root;
    }
};
