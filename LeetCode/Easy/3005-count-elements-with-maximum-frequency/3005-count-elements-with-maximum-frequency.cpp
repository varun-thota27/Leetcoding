class Solution {
public:
    int maxFrequencyElements(vector<int>& v) {
        unordered_map<int,int> mp;
        for(int x:v) mp[x]++;

        int maxi=0;
        for(auto it:mp){
            int freq=it.second;
            maxi=max(maxi,freq);
        }
        int ans=0;
        for(auto it:mp){
            if(it.second==maxi){
                ans+=maxi;
            }
        }
        return ans;
    }
};