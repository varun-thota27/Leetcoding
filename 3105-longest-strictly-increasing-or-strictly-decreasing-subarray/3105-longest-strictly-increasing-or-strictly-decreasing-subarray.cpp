class Solution {
public:
    int longestMonotonicSubarray(vector<int>& v) {

        int n=v.size(),inc=1,dec=1,ans=0;
        if(n==1)
        return 1;
        for(int i=1;i<n;i++){
            if(v[i-1]>v[i]){
            dec++;
            inc=1;
            }

            else if(v[i]>v[i-1]){
            inc++;
            dec=1;
            }
            else{
                inc=1;
                dec=1;
            }
            ans=max({ans,inc,dec});
        }
        return ans;
    }
};