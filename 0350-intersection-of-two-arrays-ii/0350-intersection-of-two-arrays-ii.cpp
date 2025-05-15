class Solution {
public:
    vector<int> intersect(vector<int>& v1, vector<int>& v2) {
        vector<int> ans;
        if(v1.size()==0 || v2.size()==0)
        return ans;

        
        unordered_map<int,int> mp1,mp2;

        for(int x:v1)
        mp1[x]++;
        for(int x:v2)
        mp2[x]++;

        for(const auto& [x,freq]:mp1){
            if(mp2[x]>0)
            {
                int n= min(freq,mp2[x]);
                for(int i=0;i<n;i++)
                ans.push_back(x);
            }
        }
        return ans;
    }
};