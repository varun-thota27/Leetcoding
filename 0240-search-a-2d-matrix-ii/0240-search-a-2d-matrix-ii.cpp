class Solution {
public:
    bool searchMatrix(vector<vector<int>>& a, int target) {

        int r=a.size();
        int c=a[0].size();

        int row=0;
        int col=c-1;
        // int f=0;
        while(row<r && col>=0)
        {
            int x=a[row][col];
            if(x==target)
            return 1;
            else if(x<target)
            row++;
            else
            col--;
        }
        return 0;
    }
};