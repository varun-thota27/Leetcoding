class Solution {
public:

    void solve(vector<int> v,vector<vector<int>> &vec,int i,vector<int> ans)
    {
        if(i==v.size()){
            vec.push_back(ans);
            return ;
        }


        ans.push_back(v[i]);
        solve(v,vec,i+1,ans);
        ans.pop_back();

        solve(v,vec,i+1,ans);
    }
    vector<vector<int>> subsets(vector<int>& v) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<vector<int>> vec;
        vector<int> ans;
        solve(v,vec,0,ans);

        return vec;
    }
};