class Solution {
public:
    int maxDistance(vector<vector<int>>& v) {

        int ans=0,small=v[0][0],big=v[0].back();
        // if(v.size()<=2) return abs(big-small);
        for(int i=1;i<v.size();i++){

            ans= max(ans,abs(v[i].back()-small));
            ans= max(ans,abs(big-v[i][0]));
            big=max(big,v[i].back());
            small=min(small,v[i][0]);
        }
        // ans=max(ans,abs(big-small));

        return ans;
    }
};