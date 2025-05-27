class Solution {
public:
    int solve(int n){
        int c=0;
        while(n>0){
            int x=n%2;
            if(x==1)
            c++;
            n/=2;
        }
        return c;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        ans.push_back(0);
        for(int i=1;i<=n;i++){
            int c=solve(i);
            ans.push_back(c);
        }
        return ans;
    }
};