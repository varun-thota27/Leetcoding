class Solution {
public:

    void shortest(unordered_map<int,vector<pair<int,int>>>& mp,vector<int> &res,int src) {

    queue<pair<int,int>> q;
    q.push({src,0});
    res[src] = 0;
    while(!q.empty()) {
        pair<int,int> p = q.front();
        q.pop();
        
        for(auto x: mp[p.first]) {
            if(res[x.first] > x.second + p.second) {
                res[x.first] = x.second + p.second;
                q.push({x.first,x.second + p.second});
            }
        }
    }
}
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
         unordered_map<int,vector<pair<int,int>>> mp;

        for (auto& edge : times) {
            mp[edge[0]].push_back({edge[1],edge[2]});
        }

        vector<int> res(n+1,INT_MAX);
        shortest(mp,res,k);
        int maxi=0;
        for(int i=1;i<res.size();i++)
        {
            if(res[i]==INT_MAX)
            {
                 maxi=-1;
                break;
            }   
            else
                maxi=max(maxi,res[i]);
        }
        return maxi;
    }
};