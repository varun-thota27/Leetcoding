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

    private:
       void inorder(TreeNode* node,vector<int>& v)
       {
         if(!node)
           return ;
         inorder(node->left,v);
         v.push_back(node->val);
         inorder(node->right,v);

       }
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> v;

       inorder(root,v);
        
        return v;
    }
};