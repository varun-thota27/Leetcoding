class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& v, int k) {

        vector<bool> vec(v.size());

        int maxi=*max_element(v.begin(),v.end());

        for(int i=0;i<v.size();i++)
        {
            if(v[i]+k >= maxi)
            vec[i]=true;
            else
            vec[i]=false;
        }
        return vec;
    }
};