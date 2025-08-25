class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& v) {
        vector<vector<int>> ans;
        vector<int> path;

        dfs(0,path,v,ans);

        return ans;
    }
    void dfs(int node,vector<int>& path,vector<vector<int>>& v,  
    vector<vector<int>>& ans){
        
        path.push_back(node);

        if(node== v.size()-1){
            ans.push_back(path);
        }
        else{
            for(int x: v[node]){
                dfs(x,path,v,ans);
            }
        }
        path.pop_back();
    }
};