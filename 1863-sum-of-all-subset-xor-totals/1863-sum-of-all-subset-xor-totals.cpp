class Solution {
public:
    int subsetXORSum(vector<int>& v) {
        int n=v.size();
        int ans=0;
        for(int x:v){
            ans |=x;
        }
        return ans *(1<<(n-1));
        
    }
};