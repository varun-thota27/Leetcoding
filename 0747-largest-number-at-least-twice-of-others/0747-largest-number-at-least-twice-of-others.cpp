class Solution {
public:
    int dominantIndex(vector<int>& v) {

        auto maxi= max_element(v.begin(),v.end());
        int idx=distance(v.begin(),maxi);

        for(int x:v)
        {
            if(x!=*maxi)
            {
                if(x*2>*maxi)
                return -1;
            }
        }
        return idx;
    }
};