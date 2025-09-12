class Solution {
public:
    bool doesAliceWin(string s) {
        int c=0;
        string vow="aeiou";

        for(char x:s){
            if(vow.find(x)!= string::npos){
                return true;
            }
        }
        return false;
    }
};