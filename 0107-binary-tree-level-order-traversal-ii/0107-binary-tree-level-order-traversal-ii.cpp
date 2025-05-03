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
    map<int,vector<int>> mp;
    void traverse(TreeNode* root,int level)
    {
        if(root==NULL)
        return;
        traverse(root->left,level+1);
        traverse(root->right,level+1);
        
        vector<int> v=mp[level];
        v.push_back(root->val);
        mp[level]=v;
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        
        vector<vector<int>> vec;
        traverse(root,0);
        for(int i=0;i<mp.size();i++)
        {
            vector<int> a;
            for(int x:mp[i])
               a.push_back(x);

            vec.push_back(a);
        }
        reverse(vec.begin(),vec.end());
        return vec;
    }
};