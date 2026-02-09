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
    void inorder(TreeNode* root,vector<int>& v){
        if(!root)
        return;

        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
    }
    TreeNode* build(const vector<int>& v,int lt,int rt){
        if(lt>rt) return NULL;

        int mid=(lt+rt)/2;
        TreeNode* node=new TreeNode(v[mid]);
        node->left=build(v,lt,mid-1);
        node->right=build(v,mid+1,rt);

        return node;
    }
    TreeNode* balanceBST(TreeNode* root) {
        
        vector<int> v;
        inorder(root,v);

        return build(v,0,v.size()-1);
    }
};