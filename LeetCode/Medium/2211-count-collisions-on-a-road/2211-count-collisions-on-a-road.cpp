class Solution {
public:
    int countCollisions(string s) {
        int n=s.length();
        if(n==1) return 0;

        int lt=0,rt=n-1,c=0;

        while(s[lt]=='L') lt++;
        while(lt<rt && s[rt]=='R') rt--;

        if(lt>=rt) return 0;

        for(;lt<=rt;lt++){
            while(s[lt]=='R'){
                lt++;
                c++;
            }
            if(s[lt]=='L')c++;
        }
        return c;
        
    }
};