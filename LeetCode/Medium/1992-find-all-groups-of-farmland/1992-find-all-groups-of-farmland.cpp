#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int m = land.size(), n = land[0].size();
        vector<vector<int>> ans;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (land[i][j] == 1) {
                    int r2 = i, c2 = j;

                    while (r2 + 1 < m && land[r2 + 1][j] == 1) r2++;
                    while (c2 + 1 < n && land[i][c2 + 1] == 1) c2++;

                    for (int x = i; x <= r2; x++) {
                        for (int y = j; y <= c2; y++) {
                            land[x][y] = 0;
                        }
                    }

                    ans.push_back({i, j, r2, c2});
                }
            }
        }
        return ans;
    }
};
