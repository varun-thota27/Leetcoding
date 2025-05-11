class Solution {
public:
    int maximum69Number (int n) {
        string s=to_string(n);
        int idx=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='6'){
            idx=i;
            break;
            }
        }
        s[idx]='9';

        return stoi(s);
    }
};