/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    int height(TreeNode* node)
    {
        if(node==NULL)
        return 0;

        int x=height(node->left);
        int y=height(node->right);

        if(x==-1 || y==-1 || abs(x-y)>1)
        return -1;

        return max(x,y)+1;
    }
    bool isBalanced(TreeNode* root) {

        return height(root)!=-1;
        
    }
};