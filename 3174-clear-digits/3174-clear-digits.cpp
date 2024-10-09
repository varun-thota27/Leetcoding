class Solution {
public:
    string clearDigits(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        stack<char> stk;
        for(char x:s)
        {
            if(x>=48 && x<=57)
            {
                stk.pop();
            }
            else
            stk.push(x);
        }
        string r;
        while(!stk.empty())
        {
            r+=stk.top();
            stk.pop();
        }
        reverse(r.begin(),r.end());
        return r;
    }
};