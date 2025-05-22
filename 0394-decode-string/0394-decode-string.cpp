class Solution {
public:
    string decodeString(string s) {

        string res="";
        stack<pair<int,string>> stk;
        int c=0;
        for(char x:s)
        {
            if(isdigit(x))
                c=c*10 + (x-'0');
            else if(x=='[')
            {
                stk.push({c,res});
                c=0;
                res="";
            }
            else if(x==']'){
                auto [n,str]=stk.top();
                stk.pop();
                string ans=str;
                while(n--){
                    ans+= res;
                }
                res=ans;
            }
            else
            res+=x;
        }
        return res;
    }
};