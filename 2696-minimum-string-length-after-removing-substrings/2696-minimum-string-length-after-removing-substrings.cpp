class Solution {
public:
    int minLength(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        stack<char> stk;

        for(int i=0;i<s.length();i++)
        {
            if(stk.empty())
            stk.push(s[i]);

            else{
                if(s[i]=='B' && stk.top()=='A')
                 stk.pop();

                else if(s[i]=='D' && stk.top()=='C')
                 stk.pop();
                 else
                  stk.push(s[i]);
            }
        }
        return stk.size();
    }
};