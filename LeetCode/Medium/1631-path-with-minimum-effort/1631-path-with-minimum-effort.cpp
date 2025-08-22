class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& v) {
        int n=v.size(),m=v[0].size();

        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>
            ,greater<pair<int,pair<int,int>>>> pq;

        vector<vector<int>> diff(n,vector<int> (m,1e9));
        diff[0][0]=0;
        pq.push({0,{0,0}});

        int dr[]={-1,0,1,0};
        int dc[]={0,1,0,-1};

        while(!pq.empty()){
            auto it=pq.top();
            pq.pop();

            int d=it.first;
            int r=it.second.first;
            int c=it.second.second;

            if(r==n-1 && c==m-1) return d;
            for(int i=0;i<4;i++){
                int nrow= r + dr[i];
                int ncol= c + dc[i];
                if(nrow>=0 && nrow<n && ncol>=0 && ncol<m){
                    int newDif= max(abs(v[r][c]-v[nrow][ncol]),d);
                    if(newDif< diff[nrow][ncol]){
                        diff[nrow][ncol]=newDif;
                        pq.push({newDif,{nrow,ncol}});
                    }
                }
            }
        }
        return 0;
    }
};