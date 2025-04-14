class Solution {
public:
    int countGoodTriplets(vector<int>& v, int a, int b, int c) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n=v.size(),cnt=0;

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++){
                if(abs(v[i]-v[j])<=a){
                    for(int k=j+1;k<n;k++)
                    {
                        if(abs(v[j]-v[k])<=b && abs(v[i]-v[k])<=c)
                        cnt++;
                    }
                }
            }
        }
        return cnt;
    }
};