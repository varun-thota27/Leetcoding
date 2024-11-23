class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& v) {

        int n=v.size(),m=v[0].size();
        vector<vector<char>> vec(m,vector<char> (n,'.'));

        for(int i=0;i<n;i++)
        {
            int x=m-1;
            for(int j=m-1;j>=0;j--)
            {
                if(v[i][j]=='#')
                {
                    vec[x][n-i-1]='#';
                    x--;
                }
                else if(v[i][j]=='*')
                {
                    vec[j][n-i-1]='*';
                    x=j-1;
                }
            }
        }
        return vec;
    }
};