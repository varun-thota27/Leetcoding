class Solution {
public:
    bool rotateString(string s, string goal) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        if(s.length()!=goal.length())
        return false;

        for(int i=0;i<s.length();i++)
        {
            if(s==goal)
            return true;

            char ch=s[0];
            s.erase(0,1);
            s.push_back(ch);
        }
        return false;
    }
};