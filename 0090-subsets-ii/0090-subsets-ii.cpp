class Solution {
public:
    void solve(vector<int>& v, vector<vector<int>>& vec, int i, vector<int>& ans) {
        vec.push_back(ans); 
        for (int j = i; j < v.size(); j++) {
            if (j > i && v[j] == v[j - 1])
             continue;

            ans.push_back(v[j]); 
            solve(v, vec, j + 1, ans); 
            ans.pop_back(); 
        }
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
