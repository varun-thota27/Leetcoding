class Solution {
public:
    int trap(vector<int>& v) {
       int n=v.size();
       int pre[n],suf[n];
        
       pre[0]=v[0];
       suf[n-1]=v[n-1];
       for(int i=1;i<n;i++)
         pre[i]= max(pre[i-1],v[i]);

       for(int i=n-2;i>=0;i--)
        suf[i]=max(suf[i+1],v[i]);

       int c=0;
       for(int i=0;i<n;i++)
          c += min(suf[i],pre[i]) -v[i];

       return c;
    }
};
