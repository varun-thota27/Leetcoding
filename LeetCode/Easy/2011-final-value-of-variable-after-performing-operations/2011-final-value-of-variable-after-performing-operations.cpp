class Solution {
public:
    int finalValueAfterOperations(vector<string>& v) {
        int ans=0;

        for(auto &it:v){
            if(it[1]=='+') ans++;
            else ans--;
        }
        return ans;
    }
};