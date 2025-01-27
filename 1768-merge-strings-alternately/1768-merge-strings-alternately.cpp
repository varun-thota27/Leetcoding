class Solution {
public:
    string mergeAlternately(string s1, string s2) {
        int i=0;
        string ans="";
        while(i< s1.length() || i<s2.length()){
            if(i<s1.length())
            ans+=s1[i];

            if(i< s2.length())
            ans+=s2[i];

            i++;
        }
       return ans;
    }
};