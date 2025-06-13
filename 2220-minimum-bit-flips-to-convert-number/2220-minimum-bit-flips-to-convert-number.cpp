class Solution {
public:
    int minBitFlips(int start, int goal) {
        long long n=start^goal;
        int c=0;
        while(n>0){
            n=n&(n-1);
            c++;
        }
        return c;
    }
};