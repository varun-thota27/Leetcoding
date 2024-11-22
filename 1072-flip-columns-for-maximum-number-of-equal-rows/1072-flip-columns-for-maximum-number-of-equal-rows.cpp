class Solution {
public:
    int maxEqualRowsAfterFlips(vector<vector<int>>& mat) {
        unordered_map<string, int> mp;
        
        for (const auto& row : mat) {
            string s;
            if (row[0] == 0) {
                for (int bit : row) s += to_string(bit);
            } else {
                for (int bit : row) s += to_string(bit ^ 1);
            }
            mp[s]++;
        }
        
        int ans = 0;
        for (const auto& pair : mp) {
            ans = max(ans, pair.second);
        }
        return ans;
    }
};