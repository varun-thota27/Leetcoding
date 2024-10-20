class Solution {
public:

 int solve(string a ,string b)
{
    vector<int> cur(b.length()+1,0);
    vector<int> next(b.length()+1,0);
    
    for(int i=a.length()-1;i>=0;i--)
    {
        for(int j=b.length()-1;j>=0;j--)
        {
            int res=0;
            if(a[i]==b[j])
            res= 1 + next[j+1];
            else
            res = max(next[j],cur[j+1]);
            
            cur[j]=res;
        }
        next=cur;
    }
    return next[0];
}

    int longestPalindromeSubseq(string s) {
        string t=s;
        reverse(s.begin(),s.end());
    //    vector<vector<int>> dp(s.length(),vector<int> (t.length(),-1));
       int ans =solve(s,t);
        
        return ans;
    }
};