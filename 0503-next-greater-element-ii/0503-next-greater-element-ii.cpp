class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& v) {
        int n=v.size();
        vector<int> ans(n,-1);
        stack<int> stk;
        
        for(int i=2*n-1;i>=0;i--){
            int idx= i%n;
            while(!stk.empty() && stk.top()<=v[idx])
            stk.pop();

            if(i<n){
                if(!stk.empty())
                ans[idx]=stk.top();
            }
            stk.push(v[idx]);
        }
        return ans;
    }
};