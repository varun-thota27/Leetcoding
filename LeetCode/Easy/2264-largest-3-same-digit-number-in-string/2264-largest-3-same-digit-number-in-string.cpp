class Solution {
public:
    string largestGoodInteger(string s) {
       string res="";

       for(int i=0;i+2<s.length();i++){
        if(s[i]==s[i+1] && s[i]==s[i+2])
        res=max(res,s.substr(i,3));
       }
        return res;
    }
};