class Solution {
public:
    vector<int> queryResults(int limit, vector<vector<int>>& vec) {
       vector<int> v(vec.size());
       unordered_map<int,int> ball,color;

       for(int i=0;i<vec.size();i++)
       {
        int x=vec[i][0],y=vec[i][1];

        if(ball.find(x)!=ball.end())
        {
            int prev=ball[x];
            color[prev]--;

            if(color[prev]==0)
            color.erase(prev);

        }
        ball[x]=y;
        color[y]++;

        v[i]=color.size();
       }
        return v;
    }
};