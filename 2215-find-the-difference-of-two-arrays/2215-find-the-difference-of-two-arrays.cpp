class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& v1, vector<int>& v2) {
        
        vector<int> r1,r2;
        unordered_set<int> s1(v1.begin(),v1.end());
        unordered_set<int> s2(v2.begin(),v2.end());

        for(int x:s1){
            if(s2.find(x)==s2.end())
                r1.push_back(x);
        }
        for(int x:s2){
            if(s1.find(x)==s1.end())
                r2.push_back(x);
        }
        return {r1,r2};
    }
};