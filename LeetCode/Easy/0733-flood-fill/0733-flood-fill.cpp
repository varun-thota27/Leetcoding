int drow[]={-1,0,1,0};
int dcol[]={0,1,0,-1};
class Solution {
public:
    void dfs(int i,int j,vector<vector<int>>& v,vector<vector<int>>& image,int& newColor,int& ini)
    {
        v[i][j]=newColor;
        int n=v.size(),m=v[0].size();
        for(int k=0;k<4;k++){
            int nrow= i+ drow[k];
            int ncol= j+ dcol[k];

            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && image[nrow][ncol]==ini && v[nrow][ncol]!=newColor)
            dfs(nrow,ncol,v,image,newColor,ini);
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        vector<vector<int>> v=image;
        int ini= image[sr][sc];
        if(ini==color) return image;

        dfs(sr,sc,v,image,color,ini);

        return v;
    }
};