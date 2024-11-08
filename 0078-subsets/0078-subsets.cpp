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

         if(i==0 || v[i]!=v[i-1] || !ans.empty() && ans.back()!= v [i])
          {
            ans.push_back(v[i]);
            solve(v, vec, i + 1, ans);
            ans.pop_back(); 
        }
    }
    vector<vector<int>> subsets(vector<int>& v) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<vector<int>> vec;
        vector<int> ans;
        int i=0;
        sort(v.begin(),v.end());
        solve(v,vec,i,ans);

        return vec;
    }
};