class Solution {
public:


    void back(vector<int> &v,int st,vector<vector<int>>& res)
    {
        if(st==v.size())
        {
            res.push_back(v);
            return;
        }
        for(int i=st;i<v.size();i++)
        {
            swap(v[st],v[i]);
            back(v,st+1,res);
            swap(v[st],v[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& v) {
        ios_base::sync_with_stdio(false);
        vector<vector<int>> res;
        back(v,0,res);

        return res; 
        
    }
};