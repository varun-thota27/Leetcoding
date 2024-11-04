class Solution {
public:
    string compressedString(string s) {
        
        int c=1,n=s.length();
        string r="";
        char x=s[0];
        for(int i=1;i<n;i++)
        {
            if(s[i]==x && c<9)
            c++;
            else{
                r.push_back(c+'0');
                r.push_back(x);
                x=s[i];
                c=1;
            }
        }
        r.push_back(c+'0');
        r.push_back(x);

        return r;
    }
};