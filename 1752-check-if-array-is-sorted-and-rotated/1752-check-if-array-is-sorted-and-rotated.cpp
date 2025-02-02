class Solution {
public:
    bool check(vector<int>& a) {
        int c=0;
        int n=a.size();

        for(int i=1;i<n;i++)
        {
            if(a[i-1]>a[i])
            c++;
        }

        if(a[n-1]>a[0])
        c++;
       
       return c<=1;
    }
};