class Solution {
public:
    int maxRotateFunction(vector<int>& v) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int n=v.size(),ans=0,sum=0;
        for(int i=0;i<n;i++){
            sum+=v[i];
            ans+= i*v[i];
        }
        int maxi= ans;
        for(int i=1;i<n;i++){
            ans = ans + sum - n*v[n-i];
            maxi=max(maxi,ans);
        }
        return maxi;
    }
};