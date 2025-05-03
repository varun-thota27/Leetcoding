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

    void solve(TreeNode* root,vector<string> &ans,string s){
        s+= to_string(root->val);
        if(root->left)
        solve(root->left,ans,s + "->");
        if(root->right)
        solve(root->right,ans,s + "->");

        if(!root->left && !root->right)
        ans.push_back(s);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        if(root)
        solve(root,ans,"");
        
        return ans;
    }
};