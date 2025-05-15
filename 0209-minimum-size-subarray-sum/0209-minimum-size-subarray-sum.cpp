class Solution {
public:
    int minSubArrayLen(int k, vector<int>& v) {
        int n=v.size(),lt=0,sum=0;
        int mini=INT_MAX;

        for(int rt=0;rt<n;rt++)
        {
            sum+= v[rt];

            while(sum>=k){
                mini=min(mini,rt-lt+1);
                sum-=v[lt];
                lt++;
            }
        }
        return mini==INT_MAX? 0: mini;
    }
};