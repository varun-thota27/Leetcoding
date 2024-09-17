class Solution {
public:
    int maxArea(vector<int>& v) {

        int maxi=0;
        int lt=0,rt=v.size()-1;

        while(lt<rt)
        {
            maxi=max(maxi, (rt-lt)*min(v[lt],v[rt]));
            if(v[lt]<v[rt])
            lt++;
            else
            rt--;
        }
        return maxi;
    }
};