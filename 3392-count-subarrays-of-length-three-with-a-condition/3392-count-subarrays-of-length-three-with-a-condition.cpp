class Solution {
public:
    int countSubarrays(vector<int>& v) {
        int c=0;
        for(int i=0;i+2<v.size();i++){
            if((v[i]+v[i+2])*2==v[i+1])
            c++;
        }
        return c;
    }
};