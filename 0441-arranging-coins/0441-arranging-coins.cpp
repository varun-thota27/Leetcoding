class Solution {
public:
    int arrangeCoins(int n) {
        
        int c=0,row=1;

        while(n>=row)
        {
            n-=row;
            row++;
            c++;
        }
        return c;
    }
};