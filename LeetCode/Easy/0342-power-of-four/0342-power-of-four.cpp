class Solution {
public:
    bool isPowerOfFour(int n) {

        long x=1;

        for(int i=0;i<=30;i++)
        {
            if(x==n)
            return true;

            if(x<INT_MAX/4){
                x=x*4;
            }
        }
        return false;
        
    }
};