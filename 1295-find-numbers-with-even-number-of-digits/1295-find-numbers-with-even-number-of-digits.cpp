class Solution {
public:

    int solve(int n){
        int c=0;
        while(n>0){
            n/=10;
            c++;
        }
        return c;
    }
    int findNumbers(vector<int>& v) {

        int c=0;
        for(int x:v){
            int dig= solve(x);
            if(dig%2==0)
            c++;
        }
        return c;
    }
};