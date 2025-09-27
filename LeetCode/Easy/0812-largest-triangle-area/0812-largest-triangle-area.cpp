class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& v) {
        double maxi = 0.0;
        int n = v.size();
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                for (int k = j + 1; k < n; ++k) {
                    int x1 = v[i][0], y1 = v[i][1];
                    int x2 = v[j][0], y2 = v[j][1];
                    int x3 = v[k][0], y3 = v[k][1];
                    double ar = 0.5 * abs(x1*(y2 - y3) + x2*(y3 - y1) + x3*(y1 - y2));
                    maxi = max(maxi, ar);
                }
            }
        }
        return maxi;
    }
};