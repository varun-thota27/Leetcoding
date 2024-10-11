class Solution {
public:
    bool canPlaceFlowers(vector<int>& v, int n) {
        
        int c1=0,c2=0;
        for(int i=0;i<v.size();i++)
        {
           bool lt= i==0 || v[i-1]==0;
           bool rt= i==v.size()-1 || v[i+1]==0;
           if(lt && rt && v[i]==0)
           {
            v[i]=1;
            n--;
           }
        }
        return n<=0;
    }
};