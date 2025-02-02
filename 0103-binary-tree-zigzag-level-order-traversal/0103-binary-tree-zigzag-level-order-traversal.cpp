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

    void traverse(TreeNode* root,int level,map<int,vector<int>> &mp)
    {
    if(root==NULL)
    return;
    
    traverse(root->left,level+1,mp);
    traverse(root->right,level+1,mp);
    
    vector<int> vec=mp[level];
    vec.push_back(root->val);
    mp[level]=vec;
}
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
{

        map<int,vector<int>> mp;
        vector<vector<int>> ans;
        traverse(root,0,mp);
        for(int i=0;i<mp.size();i++)
        {
            vector<int> a;
            if((i+1)%2==0)
            {
                 for(int x:mp[i])
                    a.push_back(x);
                reverse(a.begin(),a.end());
                ans.push_back(a);
            }
            else if((i+1)%2!=0)
            {
                for(int x:mp[i])
                    a.push_back(x);
                ans.push_back(a);
            }
        }
        return ans;
    }    
};
