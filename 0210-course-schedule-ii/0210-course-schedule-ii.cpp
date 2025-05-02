class Solution {
public:
        bool isCycle(unordered_map<int, vector<int>>& pre, vector<int>& vis, int node, vector<int>& recVis) {
        
        vis[node] = 1;
        recVis[node] = 1;
        
        for (auto x : pre[node]) {
            if (!vis[x] && isCycle(pre, vis, x, recVis)) {
                return true; 
            } 
            else if (recVis[x]) {
                return true; 
            }
        }
        
        recVis[node] = 0; 
        return false;
    }
    
    void solve(vector<int>& vis,unordered_map<int,vector<int>>& adj,
               stack<int>& stk,int node) {
        
        vis[node] = 1;
        
        for(auto x : adj[node]) {
            if(!vis[x]) {
                solve(vis,adj,stk,x);
            }
        }
        
        stk.push(node);
    }
    
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        
        vector<int> ans;
        unordered_map<int,vector<int>> adj;
        
        for (const auto& prerequisite : prerequisites) {
            adj[prerequisite[1]].push_back(prerequisite[0]);
        }
        
        vector<int> visited(numCourses,0);
        vector<int> recVis(numCourses,0);
        bool isCyclePre = true;
        
       for (int i = 0; i < numCourses && isCyclePre; i++) {
            if (!visited[i]) {
                if (isCycle(adj, visited, i, recVis)) {
                    isCyclePre = false;
                    break;
                }
            }
        }
        
        if(isCyclePre) {
            stack<int> stk;
            visited.assign(numCourses, 0);
            for(int i=0;i<numCourses;i++) {
                if(!visited[i]) {
                    solve(visited,adj,stk,i);
                }
            }

            while(!stk.empty()) {
                ans.push_back(stk.top());
                stk.pop();
            }
        }
        return ans;
    }
};