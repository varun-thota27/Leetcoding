int drow[]={-1,0,1,0};
int dcol[]={0,1,0,-1};

class Solution {
public:
    void dfs(int row,int col,vector<vector<int>>& vis,vector<vector<int>>& v)
    {
        vis[row][col]=1;
        int n=v.size(),m=v[0].size();

        for(int i=0;i<4;i++){
            int nrow= row + drow[i];
            int ncol= col + dcol[i];

            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && v[nrow][ncol]==1){
                dfs(nrow,ncol,vis,v);
            }
        }
    }
    int numEnclaves(vector<vector<int>>& v) {
        int n=v.size(),m=v[0].size();

        int c=0;
        vector<vector<int>> vis(n,vector<int> (m,0));

        for(int j=0;j<m;j++){
            if(!vis[0][j] && v[0][j]==1)
                dfs(0,j,vis,v);

            if(!vis[n-1][j] && v[n-1][j]==1)
                dfs(n-1,j,vis,v);
        }
        for(int i=0;i<n;i++){
            if(!vis[i][0] && v[i][0]==1)
                dfs(i,0,vis,v);

            if(!vis[i][m-1] && v[i][m-1]==1)
                dfs(i,m-1,vis,v);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && v[i][j]==1)
                    c++;
            }
        }
        return c;
    }
};