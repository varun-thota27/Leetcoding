class Solution {
public:
    int maxScore(string s) {
        int res=0;
        int c1=0,c2=0;
        int n=s.length();
        int ans=INT_MIN;
        for(int i=0;i<n-1;i++)
        {
            if(s[i]=='1')
            c1++;
            else
            c2++;

            ans=max(ans, c2-c1);
        }        
        if(s[n-1]=='1')
        c1++;

        return ans+c1;
        
    }
};