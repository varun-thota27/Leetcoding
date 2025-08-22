class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& v, int src, int dst, int k) {

        vector<vector<pair<int,int>>> adj(n);
        for(auto it:v){
            adj[it[0]].push_back({it[1],it[2]});
        }
        queue<pair<int,pair<int,int>>> q;
        q.push({0,{src,0}});
        vector<int> dis(n,1e9);
        dis[src]=0;

        while(!q.empty()){
            auto it=q.front();
            q.pop();

            int stops=it.first;
            int node=it.second.first;
            int cost= it.second.second;

            if(stops>k) continue;
            for(auto x: adj[node]){
                int adjnode= x.first;
                int wt=x.second;

                if( cost+ wt< dis[adjnode] && stops<=k){
                    dis[adjnode]=cost+wt;
                    q.push({stops+1,{adjnode,cost+wt}});
                }
            }
        }
        if(dis[dst]==1e9) return -1;

        return dis[dst];
    }
};