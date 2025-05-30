class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {

        if(v.size()==0)
        return {{}};
        vector<vector<int>> ans;
        sort(v.begin(),v.end());
        ans.push_back(v[0]);

        for(int i=1;i<v.size();i++)
        {
            if(ans.back()[1] >= v[i][0])
            ans.back()[1]=max(ans.back()[1],v[i][1]);
            else
            ans.push_back(v[i]);
        }
        return ans;
    }
};