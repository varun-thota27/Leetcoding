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
    void solve(TreeNode* root,int &k,vector<vector<int>>& ans,int sum,vector<int>& v){
        if(root==NULL)
        return;

        sum+=root->val;
        v.push_back(root->val);

        if(root->left==NULL && root->right==NULL){
            if(sum==k)
                ans.push_back(v);
        }
        else{
            solve(root->left,k,ans,sum,v);
            solve(root->right,k,ans,sum,v);
        }
        v.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int k) {

       vector<vector<int>> ans;
       vector<int> v;

       solve(root,k,ans,0,v);
       return ans; 
    }
};