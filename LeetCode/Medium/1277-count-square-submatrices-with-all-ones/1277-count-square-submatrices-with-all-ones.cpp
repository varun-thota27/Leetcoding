class Solution {
public:
    int countSquares(vector<vector<int>>& v) {
        int n=v.size(),m=v[0].size();
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j]==1 && i>0 && j>0){
                    v[i][j]= min({v[i-1][j],v[i][j-1],v[i-1][j-1]})+1;
                }
                c+=v[i][j];
            }
        }
        return c;
    }
};