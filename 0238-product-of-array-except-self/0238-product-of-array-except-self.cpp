class Solution {
public:
    vector<int> productExceptSelf(vector<int>& v) {

        vector<int> vec(v.size(),1);

       vec[0]=1;
       for(int i=1;i<v.size();i++)
       {
        vec[i]=vec[i-1]*v[i-1];
       }
       int rt=1;
       for(int i=v.size()-2;i>=0;i--)
       {
        rt*=v[i+1];
        vec[i]*=rt;
       }
        return vec;
    }
};