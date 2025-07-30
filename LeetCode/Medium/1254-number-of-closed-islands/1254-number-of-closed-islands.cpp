class Solution {
public:
    bool dfs(int i,int j,vector<vector<int>>& v)
    {
        int n=v.size(),m=v[0].size();
        if(i<0 || i>=n || j<0 || j>=m)
        return false;

        if(v[i][j]==1)
        return true;
        v[i][j]=1;
        bool lt=dfs(i,j-1,v),rt=dfs(i,j+1,v),up=dfs(i-1,j,v),down=dfs(i+1,j,v);

        return lt && rt && up && down;
    }
    int closedIsland(vector<vector<int>>& v) {
        int n=v.size(),m=v[0].size(),ans=0;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j]==0 && dfs(i,j,v))
                ans++;
            }
        }
        return ans;
    }
};