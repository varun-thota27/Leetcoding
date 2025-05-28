class Solution {
public:
    int minSizeSubarray(vector<int>& v, int k) {
        int n=v.size();
        long long total=0;
        for(int x:v)
        total+=x;

        int temp=(k/total)*n;
        k%=total;  
        if(k == 0) 
        return temp;

        long long sum=0;
        int mini=n+1,i=0;  
        for (int j=0;j<2*n;j++){
            sum+= v[j%n];

            while(sum>k){
                sum -= v[i % n];
                i++;
            }
            if(sum==k)
                mini=min(mini,j-i+1);
        }

        return (mini<=n) ? mini+temp: -1;
    }
};
