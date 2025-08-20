class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& v) {
        int n=v.size();
        if(v[0][0]==1 || v[n-1][n-1]==1) return -1;
        queue<pair<int,int>> q;
        q.push({0,0});

        vector<vector<int>> dis(n,vector<int> (n,1e9));
        dis[0][0]=1;

        int dr[]={-1,-1,-1,0,1,1,1,0};
        int dc[]={-1,0,1,1,1,0,-1,-1};
        while(!q.empty()){
            auto [r,c]=q.front();
            q.pop();

            int d= dis[r][c];
            // int r=it.second.first;
            // int c=it.second.second;
            if(r==n-1 && c==n-1) return d;
            for(int i=0;i<8;i++){
                int nrow= r+ dr[i];
                int ncol= c+ dc[i];

                if(nrow>=0 && nrow<n && ncol>=0 && ncol<n && v[nrow][ncol]==0
                     && d+1<dis[nrow][ncol]){
                        dis[nrow][ncol]=1+d;
                        q.push({nrow,ncol});
                 }   
            }
        }
        return -1;
    }
};