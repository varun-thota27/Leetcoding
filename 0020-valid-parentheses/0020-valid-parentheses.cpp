class Solution {
public:
    bool isValid(string s) {

        stack<char> stk;

        for(int i=0;i<s.length();i++){
            if(stk.empty())
            {
                stk.push(s[i]);
            }
            else{
                if(stk.top()=='(' && s[i]==')')
                stk.pop();
                else if(stk.top()=='[' && s[i]==']')
                stk.pop();
                else if(stk.top()=='{' && s[i]=='}')
                stk.pop();
                else
                stk.push(s[i]);
            }
        }
        return stk.empty();
    }
};