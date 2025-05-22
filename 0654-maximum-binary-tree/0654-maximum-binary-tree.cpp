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
    TreeNode* build(vector<int>& v,int st,int end)
    {
        if(st>end)
        return NULL;

        int idx=st;
        for(int i=st;i<=end;i++){
            if(v[i]>v[idx])
            idx=i;
        }
        TreeNode* root=new TreeNode(v[idx]);

        root->left=build(v,st,idx-1);
        root->right=build(v,idx+1,end);

        return root;
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& v) {
       return build(v,0,v.size()-1);
    }
};