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

    TreeNode* build(vector<int>& v,int st,int end){
        if(st>end)
        return NULL;

        int mid=(st+end)/2;
        TreeNode* root=new TreeNode(v[mid]);

        root->left=build(v,st,mid-1);
        root->right=build(v,mid+1,end);

        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& v) {
        return build(v,0,v.size()-1);
    }
};