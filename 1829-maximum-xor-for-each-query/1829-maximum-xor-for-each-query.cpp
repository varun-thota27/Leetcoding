class Solution {
public:
    vector<int> getMaximumXor(vector<int>& v, int maxi) {
        int n=v.size();
        int xorr=v[0],xormax=pow(2,maxi)-1;
        for(int i=1;i<n;i++)
        xorr^=v[i];

        vector<int> vec(n);
        for(int i=0;i<n;i++)
        {
            vec[i]=xorr^xormax;
            xorr^=v[n-i-1];
        }
        return vec;
    }
};