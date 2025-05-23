class Solution {
public:

    bool solve(vector<vector<int>>& v,int i,int j,int m,int n){
        if(i>=m || j>=n || v[i][j]==0)
        return false;

        if(i==m-1 && j==n-1)
        return true;

        v[i][j]=0;
        return  solve(v,i+1,j,m,n) || solve(v,i,j+1,m,n);
    }
    bool isPossibleToCutPath(vector<vector<int>>& v) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int m=v.size(),n=v[0].size();

        if(!solve(v,0,0,m,n))
        return true;

        v[0][0]=1; v[m-1][n-1]=1;

        return !solve(v,0,0,m,n);
    }
};