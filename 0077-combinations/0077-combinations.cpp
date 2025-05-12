class Solution {
public:
    void solve(int idx,int st,int &k,int &n,vector<vector<int>> &ans,vector<int> temp){
        if(st==k){
            ans.push_back(temp);
            return;
        }

        for(int i=idx;i<=n;i++){
            temp.push_back(i);
            solve(i+1,st+1,k,n,ans,temp);
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> ans;
        vector<int> temp;

        solve(1,0,k,n,ans,temp);
        return ans;
    }
};