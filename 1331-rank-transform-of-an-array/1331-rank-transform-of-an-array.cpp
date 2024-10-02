class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& v) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int> vec(v.begin(), v.end());
        unordered_map<int, int> mp;

        sort(vec.begin(), vec.end());
        int r = 1;
        for (int x : vec) {
            if (mp.find(x) == mp.end()) {
                mp[x] = r++;
            }
        }

        for (int i = 0; i < v.size(); ++i) {
            v[i] = mp[v[i]];
        }

        return v;
    }
};
