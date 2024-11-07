class Solution {
public:
    int largestCombination(vector<int>& v) {

        int n=v.size();
        int res=0;
        for(int i=0;i<32;i++)
        {
            int c=0;
            for(auto x:v)
            {
                if(x & (1<<i))
                c++;
            }
            res=max(res,c);
        }
        return res;
    }
};