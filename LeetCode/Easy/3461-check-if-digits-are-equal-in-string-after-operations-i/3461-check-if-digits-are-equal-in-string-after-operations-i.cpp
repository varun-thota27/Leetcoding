class Solution {
public:
    bool hasSameDigits(string s) {
        // set<string> st;

        while(s.size()>1){
            set<char> st(s.begin(),s.end());
            if(st.size()==1) return true;

            // if(s.size()==1) break;
            string res;
            res.reserve(s.size() - 1);
            for(int i=0;i<s.length()-1;i++){
                int sum=(s[i]-'0'+ s[i+1]-'0')%10;
                res += (sum+'0');
            }
            s=res;
            // st.clear();
        }
        // if(st.size()==1) return true;

        return false;
    }
};