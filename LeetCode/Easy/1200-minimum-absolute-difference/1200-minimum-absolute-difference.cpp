class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& v) {
        vector<vector<int>> ans;
        int n=v.size();
        sort(v.begin(),v.end());
        int mini=INT_MAX;
        for(int i=1;i<n;i++){
            mini=min(mini, abs(v[i-1]-v[i]));
        }
        for(int i=1;i<n;i++){
            if(abs(v[i-1]-v[i])==mini){
                ans.push_back({v[i-1],v[i]});
            }
        }
        return ans;
    }
};