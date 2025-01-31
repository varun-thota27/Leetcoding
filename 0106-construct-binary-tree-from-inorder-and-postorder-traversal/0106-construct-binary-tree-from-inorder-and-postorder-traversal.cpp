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
    TreeNode* solve(vector<int> inorder, vector<int> postorder,int &index,int st,int end,int n)
    {
        if(index<0 || st>end){
            return NULL;
        }
        int ele=postorder[index--];
        TreeNode* root= new TreeNode(ele);
        int pos=findele(inorder,ele,n);

        root->right=solve(inorder,postorder,index,pos+1,end,n);
        root->left=solve(inorder,postorder,index,st,pos-1,n);
        
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        
        int n=inorder.size();
        int i=n-1;
        TreeNode* ans=solve(inorder,postorder,i,0,n-1,n);

        return ans;
    }
};