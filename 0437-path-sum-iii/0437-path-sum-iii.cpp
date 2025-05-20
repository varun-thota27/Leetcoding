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

    void solve(TreeNode* root,int sum,int& c,vector<int> temp)
    {
        if(root==NULL)
        return ;

        temp.push_back(root->val);

        solve(root->left,sum,c,temp);
        solve(root->right,sum,c,temp);

        long long x=0;
        for(int i=temp.size()-1;i>=0;i--){
            x+=temp[i];
            if(x==sum)
            c++;
        }
        temp.pop_back();
    }
    int pathSum(TreeNode* root, int k) {
        int c=0;
        vector<int> temp;
        solve(root,k,c,temp);

        return c;
    }
};