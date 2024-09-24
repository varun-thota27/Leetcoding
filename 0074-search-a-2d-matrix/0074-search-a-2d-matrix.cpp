class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int target) {

        int r=a.size();
        int c=a[0].size();
        int st=0;
        int end=r*c-1;
        int f=0;
        int mid=st+(end-st)/2;

        while(st<=end)
        {
            int x=a[mid/c][mid%c];
            if(x==target){
            f=1;
            break;
            }
            else if(x<target){
                st=mid+1;
            }
            else if(x>target)
            end=mid-1;

            mid=st+(end-st)/2;
        }
        return f;

        
    }
};