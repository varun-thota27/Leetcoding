class Solution {
public:
    int dfs(vector<vector<int>>& v,int i,int j){
        int n=v.size(),m=v[0].size();
        if(i<0 || j<0 || i>=n || j>=m || v[i][j]==0)
        return 0;

        v[i][j]=0;
        int area=1;

        area+= dfs(v,i-1,j);
        area+= dfs(v,i,j+1);
        area+= dfs(v,i+1,j);
        area+= dfs(v,i,j-1);

        return area;
    }
    int maxAreaOfIsland(vector<vector<int>>& v) {
        int n=v.size(),m=v[0].size();
        int maxi=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int area= dfs(v,i,j);
                maxi=max(maxi,area);
            }
        }
        return maxi;
    }
};