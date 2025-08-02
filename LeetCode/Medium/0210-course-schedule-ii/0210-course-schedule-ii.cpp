class Solution {
public:
    vector<int> findOrder(int n, vector<vector<int>>& v) {
    
        vector<vector<int>> adj(n);
        vector<int> indegree(n, 0);
        for (auto it : v) {
            adj[it[1]].push_back(it[0]);
            indegree[it[0]]++;
        }
        queue<int> q;
        for (int i=0;i<n;i++)
            if (indegree[i] == 0) q.push(i);
        
        vector<int> vec;
        while (!q.empty()) {
            int node = q.front(); 
            q.pop();
            vec.push_back(node);

            for (int x : adj[node]) {
                indegree[x]--;
                if (indegree[x] == 0)
                    q.push(x);
            }
        }
        if(vec.size()==n) return vec;

        return {};
    }
};