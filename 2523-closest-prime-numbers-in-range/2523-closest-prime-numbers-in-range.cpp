class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        
        vector<int> v,sieve(right+1,true);
        sieve[0]=sieve[1]=false;

        for(int i=2;i*i<=right;i++)
        {
            if(sieve[i]){
                for(int j=i*i;j<=right;j+=i){
                    sieve[j]=false;
                }
            }
        }
        for(int i=left;i<=right;i++){
            if(sieve[i]){
                v.push_back(i);
            }
        }
        if(v.size()<2)
        return{-1,-1};

        int gap=INT_MAX;
        vector<int> res={-1,-1};
        for(int i=1;i<v.size();i++){
            int g=v[i]-v[i-1];
            if(g<gap)
            {
                gap=g;
                res= {v[i-1],v[i]};
            }
        }
        return res;
    }
};