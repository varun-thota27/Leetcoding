class Solution {
public:
    int combinationSum4(vector<int>& v, int target) {
        vector<unsigned long long> dp(target+1, 0);
        dp[0]=1;
        
        for(int i=1;i<=target;i++){
            for(int j=0;j<v.size();j++){
                if(i-v[j]>=0)
                dp[i] += dp[i-v[j]];
            }
        }
        return dp[target];
    }
};