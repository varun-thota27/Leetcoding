class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int> mp;
        int maxi=0,mini=INT_MAX;

        for(char x:s) mp[x]++;

        for(auto it:mp){
            if(it.second%2!=0) 
            maxi=max(maxi,it.second);

            if(it.second %2==0 && it.second>0)
            mini=min(mini,it.second);
        }
        return maxi-mini;
    }
};