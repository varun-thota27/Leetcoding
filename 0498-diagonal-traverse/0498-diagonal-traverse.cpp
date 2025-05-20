class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& v) {
        vector<int> ans;

        int n=v.size(),m=v[0].size();
        map<int,vector<int>> mp;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mp[i+j].push_back(v[i][j]);
            }
        }

        for(auto [level,vec]:mp)
        {
            if(level%2==0)
            reverse(vec.begin(),vec.end());

            for(int i=0;i<vec.size();i++)
            ans.push_back(vec[i]);
        }
        return ans;   
    }
};