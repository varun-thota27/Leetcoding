class Solution {
public:
    void dfs(int node,vector<vector<int>>& v,vector<bool>& vis){
        vis[node]=true;

        for(int x:v[node]){
            if(!vis[x]){
                dfs(x,v,vis);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& v) {
        int n=v.size();

        vector<bool> vis(n,0);
        dfs(0,v,vis);

        for(bool x: vis){
            if(!x) return false;
        }
        return true;
        
    }
};