class Solution {
public:
    int lengthAfterTransformations(string s, int t) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        const int MOD = 1e9 + 7;
        vector<long long> dp(26, 0);

        for(char x:s)
            dp[x-'a']++;

        while(t--)
        {
            vector<long long> dp2(26,0);
            for(int i=0;i<26;i++)
            {
                if(i==25){
                    dp2[0] =(dp2[0] + dp[25])%MOD;
                    dp2[1]=(dp2[1] + dp[25])% MOD;
                }
                else
                dp2[i+1] += dp[i];
            }
            dp=dp2;
        }
        long long ans=0;
        for(int i=0;i<26;i++)
        ans =(ans + dp[i])% MOD;

        return ans;
    }
};