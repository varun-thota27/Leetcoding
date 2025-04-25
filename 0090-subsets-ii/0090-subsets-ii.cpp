class Solution {
public:
    void solve(vector<int>& v, vector<vector<int>>& vec, int i, vector<int>& ans) {
        if(i==v.size()){
            vec.push_back(ans);
            return;
        }

        ans.push_back(v[i]);
        solve(v,vec,i+1,ans);
        ans.pop_back();

        int idx=i+1;
        while(idx<v.size() && v[idx]==v[idx-1])
        idx++;

        solve(v,vec,idx,ans);
    }

    vector<vector<int>> subsetsWithDup(vector<int>& v) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        sort(v.begin(), v.end()); 
        vector<vector<int>> vec;
        vector<int> ans;
        solve(v, vec, 0, ans);

        return vec;
    }
};
