class Solution {
public:
    int minimumRecolors(string s, int k) {

        int w=0,b=0,mini=k;
        
        for(int i=0;i<k;i++){
            if(s[i]=='W')
            w++;
        }
        mini=w;

        for(int i=k;i<s.length();i++){
            if(s[i-k]=='W') w--;
            if(s[i]=='W')w++;

            mini=min(mini,w);
        }
        return mini;
    }
};