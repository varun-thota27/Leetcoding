class Solution {
public:
    char kthCharacter(int k) {
        
        string s="a";
        while(s.length()<k){
            string res="";
            for(char x:s)
            {
                if(x=='z')
                res.push_back('a');

                res.push_back(x+1);
            }
            s+=res;
        }
        return s[k-1];
    }
};