class Solution {
public:
    vector<int> productExceptSelf(vector<int>& v) {

        vector<int> vec(v.size());

       vec[0]=1;
       for(int i=1;i<v.size();i++)
       {
        vec[i]=vec[i-1]*v[i-1];
       }
       int rt=1;
       for(int i=v.size()-1;i>=0;i--)
       {
        vec[i]*=rt;
        rt*=v[i];
       }
        return vec;
    }
};