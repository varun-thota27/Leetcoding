class Solution {
public:
    int maxProduct(vector<int>& v) {

        int p1=v[0],p2=v[0],ans=v[0];
        for(int i=1;i<v.size();i++)
        {
            int temp=max({v[i],p1*v[i],p2*v[i]});
            p2=min({v[i],p1*v[i],p2*v[i]});
            p1=temp;

            ans=max(ans,p1);
        }
        return ans;
    }
};