class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& v) {
        vector<int> ans;
        unordered_map<int,int>mp;
        for(int x:v)
        mp[x]++;

        for(int i=1;i<=v.size();i++){
            if(mp.find(i)==mp.end())
            ans.push_back(i);
        }
        return ans;
    }
};