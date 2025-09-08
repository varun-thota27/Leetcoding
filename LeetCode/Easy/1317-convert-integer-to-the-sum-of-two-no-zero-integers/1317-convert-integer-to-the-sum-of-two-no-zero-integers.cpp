class Solution {
public:
    bool check(int x){
        while(x>0){
            if(x%10==0) return false;
            x/=10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        // vector<int> ans;
        for(int i=1;i<n;i++){
            int a=i,b=n-i;

            if( check(a) && check(b)){
                return {a,b};
            }
        }
        return {};
    }
};