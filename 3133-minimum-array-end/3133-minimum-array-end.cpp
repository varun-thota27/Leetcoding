class Solution {
public:
    long long minEnd(int n, int x) {

        long res =x;
        long rem = n - 1;
        long pos = 1;
        while (rem) 
        {
            if (!(x & pos)) {
                res |= (rem & 1) * pos;
                rem >>= 1;
            }
            pos <<= 1;
        }
        return res;
    }
};