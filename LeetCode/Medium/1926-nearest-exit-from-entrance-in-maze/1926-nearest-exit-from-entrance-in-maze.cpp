class Solution {
public:
    int nearestExit(vector<vector<char>>& v, vector<int>& ent) {
        queue<pair<int,int>> q;
        int n=v.size(),m=v[0].size();

        vector<vector<int>> dis(n,vector<int>(m,-1));
        int st=ent[0],end=ent[1];
        q.push({st,end});
        dis[st][end]=0;
        int dx[]={-1,0,1,0};
        int dy[]={0,1,0,-1};
        while(!q.empty()){
            auto [x,y]=q.front();
            q.pop();

            for(int i=0;i<4;i++){
                int nrow= x+ dx[i];
                int ncol= y+ dy[i];

                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && v[nrow][ncol]=='.' && dis[nrow]
                [ncol]==-1){
                    dis[nrow][ncol]=dis[x][y] +1;
                    q.push({nrow,ncol});

                    if(nrow==0 || nrow==n-1 || ncol==0 || ncol==m-1){
                        if(!(nrow==st && ncol==end))
                            return dis[nrow][ncol];
                    }
                }
            }
        }
        return -1;
    }
};