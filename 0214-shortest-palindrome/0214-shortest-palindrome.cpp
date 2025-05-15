class Solution {
public:
    string shortestPalindrome(string s) {
        int n=s.length();
        int i=0,j=n-1;

        while(j>=0){
            if(s[i]==s[j])
            i++;

            j--;
        }

        string rem=s.substr(i);
        if(rem.length()==0)
        return s;

        string rev=rem;
        reverse(rev.begin(),rev.end());

        return rev + shortestPalindrome(s.substr(0,i)) + rem;
    }
};