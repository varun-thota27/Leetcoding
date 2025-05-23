class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& v) {

        vector<int> ans(v.size(),0);
        stack<pair<int,int>> stk;
        for(int i=0;i<v.size();i++){
            int x= v[i];

            while(!stk.empty() && stk.top().first<x){
                auto [temp,idx]=stk.top();
                ans[idx]=i-idx;
                stk.pop();
            }
            stk.push({x,i});
        }
        return ans;;
    }
};