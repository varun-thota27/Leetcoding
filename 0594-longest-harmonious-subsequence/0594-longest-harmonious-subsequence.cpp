class Solution {
public:
    int findLHS(vector<int>& v) {
        sort(v.begin(), v.end());
        int j = 0, maxi = 0;

        for (int i = 0; i < v.size(); ++i) {
            while (v[i] - v[j] > 1) {
                ++j;
            }
            if (v[i] - v[j] == 1) {
                maxi = max(maxi, i - j + 1);
            }
        }
        return maxi;
    }
};