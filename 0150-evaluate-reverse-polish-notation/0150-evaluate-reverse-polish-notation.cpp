class Solution {
public:
    int evalRPN(vector<string>& v) {
        stack<int> stk;
        int a,b;
        for(auto x:v)
        {
            if(x=="+")
            {
                a=stk.top();
                stk.pop();
                b=stk.top();
                stk.pop();
                stk.push(a+b);
            }
            else if(x=="-")
            {
                a=stk.top();
                stk.pop();
                b=stk.top();
                stk.pop();
                stk.push(b-a);
            }
            else if(x=="*")
            {
                a=stk.top();
                stk.pop();
                b=stk.top();
                stk.pop();
                stk.push(a*b);
            }
            else if(x=="/")
            {
                a=stk.top();
                stk.pop();
                b=stk.top();
                stk.pop();
                stk.push(b/a);
            }
            else
            stk.push(stoi(x));
        }
        return stk.top();
    }
};