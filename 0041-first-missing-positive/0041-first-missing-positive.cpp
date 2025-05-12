class Solution {
public:
    int firstMissingPositive(vector<int>& v) {
        v.erase(remove_if(v.begin(),v.end(),[](int n) { return n<= 0;}), v.end());

        sort(v.begin(),v.end());
        int ans=1;
        for(int x:v){
            if(ans==x)
            ans++;
            else if(x>ans)
            break;
        }
        return ans;
    }
};