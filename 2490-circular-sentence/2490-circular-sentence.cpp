class Solution {
public:
    bool isCircularSentence(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        stringstream ss(s);
        string w;
        char prev='\0';
        while(ss>>w)
        {
            int len=w.length();
            char cur=w[0];
            if(prev!=cur && prev!='\0')
              return false;

            prev=w[len-1];
        }
        if(prev!=s[0])
        return false;

        return true;
    }
};