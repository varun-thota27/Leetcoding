class Solution {
public:
    vector<int> findDuplicates(vector<int>& v) {
        vector<int> ans;

        sort(v.begin(),v.end());
        for(int i=1;i<v.size();i++)
        {
            if(v[i]==v[i-1])
            ans.push_back(v[i]);
        }
        return ans;
    }
};