class Solution {
public:
    bool uniqueOccurrences(vector<int>& v) {
        unordered_map<int, int> mp;
        for (int num : v) {
            mp[num]++;
        }

        unordered_set<int> freq;
        for (auto &p : mp) {
            if (!freq.insert(p.second).second) {
                return false;  
            }
        }
        return true;
    }
};