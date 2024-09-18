class Solution {
public:
    int countAsterisks(string s) {

        int c=0;
        int c1=0;

        for(int i=0;i<s.length();i++)
        {

            if(s[i]=='|')
            c++;
            if(c%2==0)
            {
                if(s[i]=='*')
                c1++;
            }
            else
            continue;
        }
        return c1;
    }
};