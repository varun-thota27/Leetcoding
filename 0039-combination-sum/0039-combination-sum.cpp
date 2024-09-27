class Solution {

    private:

     void comb(vector<int>& v, int k, int st, vector<int>& cur, vector<vector<int>>& ans) {
        if (k == 0) {
            ans.push_back(cur);
            return;
        }
        for (int i = st; i < v.size(); i++) {
            if (v[i] > k) 
                continue;
            cur.push_back(v[i]);
            comb(v, k - v[i], i, cur, ans);
            cur.pop_back(); 
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> cur;
        sort(candidates.begin(), candidates.end());
        comb(candidates, target, 0, cur, ans);
        return ans;
 }
};