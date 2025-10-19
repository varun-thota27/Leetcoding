class Solution {
public:
    int countBattleships(vector<vector<char>>& v) {
        int n=v.size(),m=v[0].size();

        int c=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(v[i][j]=='X'){
                    if(i>0 && v[i-1][j]=='X') continue;
                    if(j>0 && v[i][j-1]=='X') continue;

                    c++;
                }
            }
        }
        return c;
        
    }
};