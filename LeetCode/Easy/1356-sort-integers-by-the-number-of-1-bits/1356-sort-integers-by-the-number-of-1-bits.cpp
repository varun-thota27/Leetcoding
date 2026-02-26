class Solution {
public:
    
    vector<int> sortByBits(vector<int>& v) {
        sort(v.begin(),v.end(),[](int a ,int b){
            int c1=__builtin_popcount(a);
            int c2=__builtin_popcount(b);

            if(c1==c2)
                return a<b;

            return c1<c2;
        });

    return v;
    }
};