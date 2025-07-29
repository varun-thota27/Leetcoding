int drow[]={-1,0,1,0};
int dcol[]={0,1,0,-1};
class Solution {
public:
    void dfs(int row,int col,vector<vector<int>>& vis,vector<vector<char>>& v)
    {
         int n=v.size(),m=v[0].size();
        vis[row][col]=1;

        for(int i=0;i<4;i++){
            int nrow= row+ drow[i];
            int ncol= col + dcol[i];

            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && v[nrow][ncol]=='O')
            dfs(nrow,ncol,vis,v);
        }
    }
    void solve(vector<vector<char>>& v) {
        int n=v.size(),m=v[0].size();
        vector<vector<int>> vis(n, vector<int> (m,0));

        for(int j=0;j<m;j++)
        {
            // first row
            if(!vis[0][j] && v[0][j]=='O'){
                dfs(0,j,vis,v);
            }
            // last row
            if(!vis[n-1][j] && v[n-1][j]=='O'){
                dfs(n-1,j,vis,v);
            }
        }
        for(int i=0;i<n;i++){
            // 1st col
            if(!vis[i][0] && v[i][0]=='O'){
                dfs(i,0,vis,v);
            }
            // last col
            if(!vis[i][m-1] && v[i][m-1]=='O')
                dfs(i,m-1,vis,v);
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && v[i][j]=='O')
                    v[i][j]= 'X';
            }
        }
        // return v;
    }
};