class Solution {
public:
    vector<int> buildArray(vector<int>& v) {
        vector<int> v1(v.size(),0);
        for(int i=0;i<v.size();i++){
            v1[i]=v[v[i]];
        }
        return v1;
        
    }
};