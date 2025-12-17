class Solution {
public:
    long long maximumProfit(vector<int>& v, int k) {
        int n = v.size();
        if (n == 0 || k == 0) {
            return 0;
        }

        const long long neg = -2e18; 

        vector<long long> v1(k + 1, neg);
        vector<long long> buy(k + 1, neg);
        vector<long long> sell(k + 1, neg);

        v1[0] = 0;

        for (int p : v) {
            for (int j = k; j >= 0; j--) {
                if (j > 0) {
                    if (buy[j] != neg) {
                        v1[j] = max(v1[j], buy[j] + p);
                    }
                    if (sell[j] != neg) {
                        v1[j] = max(v1[j], sell[j] - p);
                    }
                }
                
                if (j > 0 && v1[j-1] != neg) {
                    buy[j] =max(buy[j], v1[j-1] - p);
                }

                if (j > 0 && v1[j-1] != neg) {
                    sell[j] = max(sell[j], v1[j-1] + p);
                }
            }
        }

        long long maxi = 0;
        for (int j = 0; j <= k;j++) {
            maxi = max(maxi, v1[j]);
        }

        return maxi;
    }
};