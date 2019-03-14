//C++ Code
//Title      Populating Next Right Pointers in Each Node
//Difficulty Medium

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() {}

    Node(int _val, Node* _left, Node* _right, Node* _next) {
        val = _val;
        left = _left;
        right = _right;
        next = _next;
    }
};
*/
class Solution {
public:
    Node* connect(Node* root) {
        if(root == NULL)
            return NULL;
        
        vector<Node*> arrayNode;
        arrayNode.push_back(root);
        int arraySize = 1, arrayIndex = 0;
        while(arrayIndex < arraySize)
        {
            if(arrayNode[arrayIndex]->left != NULL)
            {
                arrayNode.push_back(arrayNode[arrayIndex]->left);
                arraySize++;
            }
            if(arrayNode[arrayIndex]->right != NULL)
            {
                arrayNode.push_back(arrayNode[arrayIndex]->right);
                arraySize++;
            }
            arrayIndex++;
        }
        
        int levelSize = 1, levelDiff = 1, levelIndex = 0;
        arrayIndex = 0;
        while(arrayIndex < arraySize)
        {
            while(levelIndex < levelSize-1)
            {
                arrayNode[arrayIndex]->next = arrayNode[arrayIndex+1];
                arrayIndex++;
                levelIndex++;
            }
            levelSize *= 2;
            levelIndex = 0;
            arrayIndex++;
        }
        
        return root;
    }
};
