class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int thres) {
        vector<vector<int>> v(n,vector<int> (n,INT_MAX));

        for(auto it:edges){
            v[it[0]][it[1]]= it[2];
            v[it[1]][it[0]]= it[2];
        }
        for(int i=0;i<n;i++) v[i][i]=0;
        for(int k=0;k<n;k++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(v[i][k]==INT_MAX || v[k][j]==INT_MAX)
                    continue;
                    v[i][j] = min(v[i][j], v[i][k]+v[k][j]);
                }
            }
        }
        int city=-1,cnt=n;
        for(int i=0;i<n;i++){
            int c=0;
            for(int j=0;j<n;j++){
                if(v[i][j]<=thres){
                    c++;
                }
            }
            if(c<=cnt){
                cnt=c;
                city=i;
            }
            
        }
        return city;
    }
};