class Solution {
public:
    int kthSmallest(vector<vector<int>>& v, int k) {

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        priority_queue<int,vector<int>,greater<int>> q;
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v[0].size();j++)
            {
                q.push(v[i][j]);
            }
        }
        for(int i=0;i<k-1;i++)
        q.pop();

        return q.top();
        
    }
};