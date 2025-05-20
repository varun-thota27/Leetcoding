class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& v, int left, int right) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n=v.size(),c=0,ans=0;
        int prev=-1;
        for(int i=0;i<n;i++)
        {
            if(v[i]>right){
                prev=i;
                c=0;
            }
            else if(v[i]>=left){
                c=i-prev;
                ans+=c;
            }
            else 
            ans+=c;
        }
        return ans;
    }
};