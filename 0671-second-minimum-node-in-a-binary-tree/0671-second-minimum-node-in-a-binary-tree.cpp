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
    int findSecondMinimumValue(TreeNode* root) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int> v;
        inorder(root,v);

        set<int> s(v.begin(),v.end());
        s.erase(s.begin());

        if(!s.empty())
        return *s.begin();

        return -1;
    }
};