class Solution {
public:
    int prefixCount(vector<string>& v, string pref) {
        int c=0;
        for(const string& x:v)
        {
            if(x.substr(0,pref.length())==pref)
            c++;
        }
        return c;
    }
};