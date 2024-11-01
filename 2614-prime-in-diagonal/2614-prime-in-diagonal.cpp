class Solution {
public:

    bool isprime(int n)
    {
        if(n==1)
        return false;
        // int c=1;
        for(int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            return false;

            // if(c>2)
            // return 0;
        }
        return true;
    }
    int diagonalPrime(vector<vector<int>>& v) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int maxi=0;
        // vector<int> vec;
       for(int i=0;i<v.size();i++)
       {
         if(isprime(v[i][i]))
         maxi=max(maxi,v[i][i]);
         if(isprime(v[i][v.size()-i-1]))
         maxi=max(maxi,v[i][v.size()-i-1]);
       }
    //    maxi=*max_element(vec.begin(),vec.end());
       return maxi;
    }
};