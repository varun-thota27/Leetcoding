class Solution {
public:
    string removeOccurrences(string s, string part) {
        
        int len=part.length();
        
        for(char x:s){
            if(s.find(part)<s.length()){
                s.erase(s.find(part),len);
            }
        }
        return s;
    }
};