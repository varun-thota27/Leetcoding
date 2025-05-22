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
    int findBottomLeftValue(TreeNode* root) {
        int ans=0;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty())
        {
            int n=q.size();
            for(int i=1;i<=n;i++)
            {
                TreeNode* top=q.front();
                q.pop();
                if(i==1)
                ans=top->val;

                if(top->left)
                q.push(top->left);
                if(top->right)
                q.push(top->right);
            }
        }
        return ans;
    }
};