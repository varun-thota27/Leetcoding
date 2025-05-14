class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {

        unordered_map<string, int> mp;
        string temp;
        temp=s.substr(0, 10);
        int n=s.length();
        vector<string> ans;
        if (n < 10) {
            return ans;
        }
        
        mp[temp] = 1;
        
        for (int i = 10; i < n; ++i) {
            temp = temp.substr(1) + s[i];
            mp[temp]++;
        }
        
        for (const auto& [x, c] : mp) {
            if (c > 1) {
                ans.push_back(x);
            }
        }
        
        return ans;
    }
};