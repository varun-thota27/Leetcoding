class Solution {
public:
    vector<int> findRightInterval(vector<vector<int>>& v) {
        vector<int> ans(v.size());
        map<int, int> m;
        for(int i = 0; i < v.size(); i++)
            m[v[i][0]] = i;
        for(int i = 0; i < v.size(); i++) 
               ans[i]  = m.lower_bound(v[i][1])!=end(m)?m.lower_bound(v[i][1]) -> second:-1;
        return ans;
    }
};