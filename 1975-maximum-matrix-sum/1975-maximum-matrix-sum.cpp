class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& v) {
        int mini = INT_MAX;
        long long sum = 0;
        int c = 0;

        for (int i = 0; i < v.size(); i++) {
            for (int j = 0; j < v[0].size(); j++) {
                if (v[i][j] < 0)
                    c++;
                int absValue = abs(v[i][j]);
                mini = min(mini, absValue);
                sum += absValue;
            }
        }

        if (c % 2 == 0)
            return sum;
        return sum - 2 * mini;
    }
};