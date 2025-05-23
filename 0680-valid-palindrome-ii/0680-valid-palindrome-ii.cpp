class Solution {
public:
    bool pal(string& s,int lt,int rt){
        
        while(lt<rt){
            if(s[lt]!=s[rt])
            return false;

            lt++;
            rt--;
        }
        return true;
    }
    bool validPalindrome(string s) {

        int lt=0,rt=s.length()-1;

        while(lt<rt)
        {
            if(s[lt]!=s[rt])
            return pal(s,lt+1,rt) || pal(s,lt,rt-1);

            rt--;
            lt++;
        }
        return true;
    }
};