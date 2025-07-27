class Solution {
public:
    int orangesRotting(vector<vector<int>>& v) {
        int n=v.size(),m=v[0].size();
        queue<pair<pair<int,int>,int>> q;
        vector<vector<int>> vis(n,vector<int> (m,0));
        int fresh=0,rotten=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j]==2){
                    q.push({{i,j},0});
                    vis[i][j]=1;
                }
                else if(v[i][j]==1)
                fresh++;
            }
        }
        int drow[]={-1,0,1,0};
        int dcol[]={0,1,0,-1};
        int time=0;
        while(!q.empty()){
            int row= q.front().first.first;
            int col= q.front().first.second;
            int t= q.front().second;
            q.pop();
            time=max(time,t);
            for(int i=0;i<4;i++){
                int nrow= row+ drow[i];
                int ncol= col + dcol[i];

                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol]&& v[nrow][ncol]==1)
                {
                    q.push({{nrow,ncol},t+1});
                    vis[nrow][ncol]=1;
                    rotten++;
                }
            }
        }
        if(fresh==rotten)
        return time;

        return -1;
    }
};