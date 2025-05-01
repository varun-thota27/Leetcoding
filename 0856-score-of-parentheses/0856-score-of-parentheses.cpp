class Solution {
public:
    int scoreOfParentheses(string s) {

        int c=0;
        stack<int> st;
        for(char x:s){
            if(x=='('){
                st.push(c);
                c=0;
            }
            else{
                c= st.top() + max(c*2,1);
                st.pop();
            }
        }
        return c;
    }
};