class Solution {
public:
    void bfs(int i,int j,vector<vector<char>>& v,vector<vector<int>>& vis)
    {
        vis[i][j]=1;
        queue<pair<int,int>> q;
        q.push({i,j});
        int n=v.size(),m=v[0].size();
        int drow[] = {-1, 0, 1, 0};
        int dcol[] = {0, 1, 0, -1};
        while(!q.empty())
        {
            int row=q.front().first;
            int col=q.front().second;
            q.pop();
            
            for(int k=0;k<4;k++){
                int nrow= row+ drow[k];
                int ncol= col + dcol[k];

                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && v[nrow][ncol]=='1' && !vis[nrow][ncol]){
                    vis[nrow][ncol]=1;
                    q.push({nrow,ncol});
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& v) {
        int n=v.size(),m=v[0].size();
        vector<vector<int>> vis(n,vector<int> (m,0));
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && v[i][j]=='1'){
                    bfs(i,j,v,vis);
                    c++;
                }
            }
        }
        return c;
    }
};