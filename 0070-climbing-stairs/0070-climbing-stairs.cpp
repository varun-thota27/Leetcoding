class Solution {
public:

    int climbStairs(int n) {
        if(n<=2)
        return n;

        int a=1,b=2;
        for(int i=3;i<=n;i++)
        {
            int ans=a+b;
            a=b;
            b=ans;
        }
        return b;
        
        
        int x=n-1;
        return (x*(x+1))/2;
    }
};