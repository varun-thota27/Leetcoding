class Solution {

    private:

    bool dfs(vector<vector<char>>& v, string& s,int i,int j,int idx,int m,int n)
{
    if(idx==s.length())
        return true;
    if(i<0 || i>=m || j<0 || j>=n || v[i][j] != s[idx])
        return false;

    char temp = v[i][j];
    v[i][j]='1'; 

    bool found = dfs(v,s,i+1,j,idx+1,m,n) || dfs(v,s,i-1,j,idx+1,m,n) || dfs(v,s,i,j+1,idx+1,m,n) || 
                 dfs(v,s,i,j-1,idx+1,m,n);

    v[i][j]=temp; 
    return found;
}
public:
    bool exist(vector<vector<char>>& v, string s) {

        int m=v.size();
        int n=v[0].size();
        int f=0;
        for(int i=0;i<m && f==0;i++)
        {
            for(int j=0;j<n && f==0;j++)
            {
                if(v[i][j] == s[0] && dfs(v,s,i,j,0,m,n)) {
                    f=1;
                }
            }
        }
        if(f) 
            return true;
        
        return false;
    }
};