class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& v, int maxDiff, vector<vector<int>>& queries) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        vector<int> vec(n, 0);
        int g=0;
        
        for (int i = 1; i < n; i++) {
            if (v[i] - v[i-1] > maxDiff) 
                g++;
            vec[i]=g;
        }

        vector<bool> ans;
        for (auto& q : queries) {
            int x=q[0], y=q[1];
            ans.push_back(vec[x] == vec[y]);
        }

        return ans;
    }
};
