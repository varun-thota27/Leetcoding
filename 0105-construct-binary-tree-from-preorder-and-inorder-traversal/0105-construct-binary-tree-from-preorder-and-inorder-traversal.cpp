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

    int findele(vector<int>& inorder,int ele,int n){
        for(int i=0;i<n;i++){
            if(inorder[i]==ele)
            return i;
        }
        return -1;
    }
    TreeNode* solve(vector<int> preorder, vector<int> inorder,int &index,int st,int end,int n)
    {
        if(index>=n || st>end){
            return NULL;
        }
        int ele=preorder[index++];
        TreeNode* root= new TreeNode(ele);
        int pos=findele(inorder,ele,n);

        root->left=solve(preorder,inorder,index,st,pos-1,n);
        root->right=solve(preorder,inorder,index,pos+1,end,n);

        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        int i=0,n=preorder.size();
        TreeNode* ans=solve(preorder,inorder,i,0,n-1,n);

        return ans;
    }
};