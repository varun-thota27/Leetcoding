class Solution {
public:
    string reverseWords(string s) {
        stack<char> stk;
        string res="";

        for(char x:s){
            if(x==' '){
                while(!stk.empty()){
                    res+=stk.top();
                    stk.pop();
                }
                res+=x;
            }
            else 
            stk.push(x);
        }
        // res+=" ";
         while(!stk.empty()){
            res+=stk.top();
            stk.pop();
        }
        return res;
    }
};