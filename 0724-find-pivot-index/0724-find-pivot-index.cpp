class Solution {
public:
    int pivotIndex(vector<int>& v) {

        int sum=0,ltsum=0;
        for(int x:v)
        sum+=x;

        for(int i=0;i<v.size();i++){
            ltsum= i==0? 0: ltsum+v[i-1];
            sum-=v[i];

            if(ltsum==sum)
            return i;
        }
        return -1;
    }
};