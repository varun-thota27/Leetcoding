class Solution {
public:
    int repeatedNTimes(vector<int>& v) {

        for(int i=0;i<v.size()-2;i++){
            if( v[i]==v[i+1] || v[i]==v[i+2])
                return v[i];
        }
        return v.back();
    }
};