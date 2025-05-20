class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans;
        unordered_map<char,int> mp;
        for(char x:t){
            mp[x]++;
        }

        for(char x:s){
            mp[x]--;
            if(mp[x]==0)
            mp.erase(x);
        }
        return mp.begin()->first;
    }
};