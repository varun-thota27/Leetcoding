class Solution {
public:
    int findMaxForm(vector<string>& strs, int m, int n) {
        vector<vector<int>> dp(m+1,vector<int>(n+1,0));
        int z,ones;

        for(auto &x:strs){
            z=ones=0;

            for(char c:x){
                if(c=='0')z++;
                else if(c=='1')ones++;
            }

            for(int i=m;i>=z;i--){
                for(int j=n;j>=ones;j--){
                    dp[i][j]=max(dp[i][j],dp[i-z][j-ones]+1);
                }
            }
        }
        return dp[m][n];
    }
};