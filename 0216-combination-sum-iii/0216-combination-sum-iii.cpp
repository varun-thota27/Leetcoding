class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> ans;
        vector<int> temp;
        solve(ans,temp,k,n,1);
        return ans;
    }

    void solve(vector<vector<int>>& ans,vector<int>&temp,int k,int n,int c)
    {
        if(k==0 && n==0)
        {
            ans.push_back(temp);
            return;
        }
        if(k<0 || n<0)
        return;
        for(int i=c;i<=9;i++)
        {
            temp.push_back(i);
            solve(ans,temp,k-1,n-i,i+1);
            temp.pop_back();
        }
    }
};