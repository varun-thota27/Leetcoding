class Solution {
public:
    int orangesRotting(vector<vector<int>>& v) {
        int m=v.size();
        int n=v[0].size();
        queue<pair<int, int>> q;
        int c=0;
        for(int i=0;i<m;i++)
         {
            for(int j=0;j<n;j++)
             {
                if (v[i][j]==2) 
                    q.push({i,j}); 
                else if (v[i][j]==1) 
                     c++; 
            }
        }
        vector<pair<int,int>> dir={{0,1},{1,0},{0,-1},{-1,0}};
        int min=0;
        while(!q.empty() && c>0) 
        {
            int size=q.size();
            while(size--)
            {
                int x=q.front().first;
                int y=q.front().second;
                q.pop();
                for(auto d:dir)
                 {
                    int nx= x+d.first;
                    int ny= y+d.second;
                    if(nx>=0 && nx<m && ny>=0 && ny<n && v[nx][ny]==1)
                     {
                        v[nx][ny]=2; 
                        c--; 
                        q.push({nx,ny}); 
                    }
                }
            }
            min++;
        }
        if(c>0)
          return -1;
        
        return min;
    }
};