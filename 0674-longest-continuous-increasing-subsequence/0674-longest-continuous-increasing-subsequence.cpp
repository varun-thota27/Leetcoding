class Solution {
public:
    int findLengthOfLCIS(vector<int>& v) {

        int c=1,maxi=1;
        for(int i=1;i<v.size();i++)
        {
            if(v[i]>v[i-1])
            c++;
            else
            c=1;

            maxi=max(maxi,c);
        }
        return maxi;
    }
};