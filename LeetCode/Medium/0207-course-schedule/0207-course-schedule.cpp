class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(n);
        for(auto it:prerequisites){
            adj[it[0]].push_back(it[1]);
        }
        vector<int> indegree(n,0);
        queue<int> q;
        for(int i=0;i<n;i++){
            for(auto it: adj[i])
                indegree[it]++;
        }
        for(int i=0;i<n;i++){
             if(indegree[i]==0)
                q.push(i);
        }
        int c=0;
        while(!q.empty()){
            int node= q.front();
            q.pop();
            c++;

            for(auto it: adj[node]){
                indegree[it]--;

                if(indegree[it]==0) q.push(it);
            }
        }
        return c==n;
    }
};