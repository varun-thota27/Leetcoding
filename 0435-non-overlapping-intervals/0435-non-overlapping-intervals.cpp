class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& v) {

        int c=0;
        sort(v.begin(),v.end(),[](const auto& a,const auto& b){
            return a[1]<b[1];
        });

        int x=v[0][1];
        for(int i=1;i<v.size();i++)
        {
            if(x> v[i][0])
            c++;
            else
            x=v[i][1];
        }
        return c;
    }
};