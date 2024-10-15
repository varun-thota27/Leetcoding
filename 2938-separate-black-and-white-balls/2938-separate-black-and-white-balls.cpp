class Solution {
public:
    long long minimumSteps(string s) {
        

        int b=0;
        long long c=0;
        for(int j=0;j<s.length();j++)
        {
            if(s[j]=='0'){
            c+=(long long) b;
            }
            else
            b++;
        }
        return c;
    }
};