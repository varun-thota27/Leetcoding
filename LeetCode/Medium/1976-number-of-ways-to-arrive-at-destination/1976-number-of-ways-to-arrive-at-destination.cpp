class Solution {
public:
    int countPaths(int n, vector<vector<int>>& v) {
        vector<vector<pair<int,int>>> adj(n);

        for(auto it:v){
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
        }
        priority_queue< pair<long long,int>,vector<pair<long long,int>>,
            greater<pair<long long,int>>> pq;
        vector<long long> dis(n,LLONG_MAX);
        vector<int> ans(n,0);

        dis[0]=0;
        ans[0]=1;
        pq.push({0,0});
        int m=(1e9+7);
        while(!pq.empty()){
            auto [d,node]=pq.top();
            pq.pop();

            for(auto [adjNode,wt]:adj[node]){
                
                if( d + wt <dis[adjNode]){
                    dis[adjNode]=d + wt;
                    pq.push({d + wt,adjNode});
                    ans[adjNode]=ans[node];
                }
                else if(d+wt== dis[adjNode]){
                    ans[adjNode]=(ans[adjNode]+ans[node])%m;
                }
            }
        }
        return ans[n-1]%m;
    }
};