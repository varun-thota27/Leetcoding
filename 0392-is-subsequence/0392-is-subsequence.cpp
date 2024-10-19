class Solution {
public:
    bool isSubsequence(string s, string t) {
        

        int n=t.length();

        int lt=0,rt=n-1;
        int i=0;
        string res="";
        while(lt<n)
        {
            if(s[i]==t[lt])
            {
                res+=s[i];
                i++;
                lt++;
            }
            else
            lt++;
        }
        return res==s;
    }
};