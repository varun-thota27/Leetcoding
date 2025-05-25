class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& v) {

        int i=0,idx=0;
        while(i<v.size())
        {
            if(v[i]%2==0){
                swap(v[idx],v[i]);
                i++;
                idx++;
            }
            else
            i++;
        }  
        return v;     
    }
};