class Solution {
public:

    void solve(vector<int> v,vector<vector<int>> &vec,int i,vector<int> ans)
    {
        if(i>=v.size())
        {
            vec.push_back(ans);
            return;
        }

        solve(v,vec,i+1,ans);

        int x=v[i];
        ans.push_back(x);
        solve(v,vec,i+1,ans);
    }
    vector<vector<int>> subsets(vector<int>& v) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<vector<int>> vec;
        vector<int> ans;
        int i=0;

        solve(v,vec,i,ans);

        return vec;
    }
};