class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& v, int left, int right) {
        
        int n=v.size(),c1=0,c2=0,cur=0;

        for(int i=0;i<n;i++)
        {
            if(v[i]<=right)
            cur++;
            else
            cur=0;

            c1+=cur;
        }
        cur=0;
        for(int i=0;i<n;i++){
            if(v[i]<=left-1)
            cur++;
            else
            cur=0;

            c2+=cur;
        }
        return c1-c2;
    }
};