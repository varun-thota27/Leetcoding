class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        int len=part.length();
        string res="";

        for(char x:s){
            res.push_back(x);
            if(res.length()>=len && res.substr(res.length()-len)==part)
                res.erase(res.length()-len,len);
        }
        return res;
    }
};