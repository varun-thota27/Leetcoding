class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& v) {
        int even=0,odd=1,n=v.size();
        while(even <n && odd<n)
        {
            if(v[even]%2==1){
                while(v[odd]%2==1)
                odd+=2;

                swap(v[even],v[odd]);
            }
            even+=2;
        }  
        return v; 
    }
};
