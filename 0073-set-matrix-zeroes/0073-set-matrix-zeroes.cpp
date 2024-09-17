class Solution {
public:
    void setZeroes(vector<vector<int>>& a) {
        int n=a.size();
        int m=a[0].size();

        vector<int> Row(n,0);
        vector<int> Col(m,0);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (a[i][j] == 0) {
                    Row[i] = 1;
                    Col[j] = 1;
                }
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (Row[i] || Col[j]) {
                   a[i][j] = 0;
                }
            }
        }
        
    }
};