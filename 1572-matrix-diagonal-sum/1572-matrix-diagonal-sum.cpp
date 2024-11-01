class Solution {
public:
    int diagonalSum(vector<vector<int>>& v) {
        int sum=0;

        for(int i=0;i<v.size();i++)
        {
            sum+=v[i][i];
            if(i!=v.size()-i-1)
            sum+=v[i][v.size()-i-1];
        }
        return sum;
    }
};