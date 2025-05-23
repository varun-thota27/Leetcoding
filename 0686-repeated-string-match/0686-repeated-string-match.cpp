class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        
        string rep=a;
        int c=1;

        while(rep.length()<b.length()){
            rep+=a;
            c++;
        }

        if(rep.find(b)!=-1)
        return c;

        rep+=a;
        c++;
        if(rep.find(b)!=-1)
        return c;

        return -1;
    }
};