class Solution {
public:
    int findKthNumber(int m, int n, int k) {
        int low=0,high=m*n;

        while(low<high)
        {
            int mid= low+(high-low)/2;
            int c=0;

            for(int i=1;i<=m;i++)
            c+= min(mid/i,n);

            if(c<k)
            low=mid+1;
            else
            high=mid;
        }
        return low;
    }
};