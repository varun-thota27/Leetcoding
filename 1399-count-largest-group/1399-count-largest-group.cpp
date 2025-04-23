class Solution {
public:

    int fun(int x)
    {
        int sum=0;
        while(x>0){
            sum+=x%10;
            x/=10;
        }
        return sum;
    }
    int countLargestGroup(int n) {
        vector<int> v(37);
        for (int i = 1; i <= n; i++) 
        v[fun(i)]++;

        int maxi = 0, c = 0;
        for (int x : v) 
            if (x > maxi) maxi = x, c= 1;
            else if (x == maxi) 
            c++;
        
        return c;
    }
};