class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        unordered_map<string,vector<string>> mp;
        vector<vector<string>> ans;
        for(auto x:s){
            string w=x;
            sort(w.begin(),w.end());
            mp[w].push_back(x);
        }
        for(auto x: mp){
            ans.push_back(x.second);
        }
        return ans;
    }
};