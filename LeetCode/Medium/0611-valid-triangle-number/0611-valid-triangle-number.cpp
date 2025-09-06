class Solution {
public:
    int triangleNumber(vector<int>& v) {
        int n=v.size(),c=0;
        sort(v.begin(),v.end());
       
       for(int k=n-1;k>=0;k--){
        int lt=0,rt=k-1;
        while(lt<rt){
            if(v[lt]+v[rt]>v[k]){
                c+= (rt-lt);
                rt--;
            }
            else lt++;
        }
       }
        return c;
    }
};