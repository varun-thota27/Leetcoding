class Solution {
public:
    int maxAscendingSum(vector<int>& v) {

        int n=v.size(),ans=v[0],sum=0;
        sum+=v[0];
        for(int i=1;i<n;i++)
        {
            if(v[i]>v[i-1])
                sum+=v[i];
            else
            sum=v[i];

            ans=max(ans,sum);
        }
        return ans;
    }
};