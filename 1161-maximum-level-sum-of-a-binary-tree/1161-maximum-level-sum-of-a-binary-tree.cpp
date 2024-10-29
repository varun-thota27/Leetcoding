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
    int maxLevelSum(TreeNode* root) {
        
        queue<TreeNode*>q;
        q.push(root);
        int ans=1,ht=1,n,maxi=root->val,sum;

        while(!q.empty())
        {
            sum=0,n=q.size();
            while(n--)
            {
                auto node=q.front();
                q.pop();
                sum+=node->val;
                if(node->left)
                q.push(node->left);
                if(node->right)
                q.push(node->right);
            }
            if(sum>maxi)
            {
                maxi=sum;
                ans=ht;
            }
            ht++;
        }
        return ans;
    }
};