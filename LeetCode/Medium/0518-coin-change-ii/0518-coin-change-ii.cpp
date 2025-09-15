class Solution {
public:
    int change(int amt, vector<int>& v) {
        vector<unsigned long long> dp(amt+1,0);
        dp[0]=1;

        for(int x:v){
            for(int i=x;i<=amt;i++){
                dp[i] += dp[i-x];
            }
        }
        return dp[amt];
    }
};