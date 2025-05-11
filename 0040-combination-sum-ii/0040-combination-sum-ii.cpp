class Solution {
public:

    void comb(vector<int>& v, int k, int st, vector<int>& cur, vector<vector<int>>& ans) {
        if (k == 0) {
            ans.push_back(cur);
            return;
        }
        for (int i=st;i<v.size(); i++) {
            if (v[i] > k) 
                break;
            if(i> st && v[i]==v[i-1])
            continue;
            cur.push_back(v[i]);
            comb(v, k - v[i], i+1, cur, ans);
            cur.pop_back(); 
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> cur;
        sort(candidates.begin(), candidates.end());
        comb(candidates, target, 0, cur, ans);
        return ans;       
    }
};
