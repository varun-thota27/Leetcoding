class Solution {
public:
    int largestRectangleArea(vector<int>& v) {
        
        int n=v.size();
        vector<int> right(n,0),left(n,0);
        stack<int> stk;

        for(int i=n-1;i>=0;i--){
            while(!stk.empty() && v[stk.top()]>=v[i])
            stk.pop();

           right[i]= stk.empty()? n :stk.top();

            stk.push(i);
        }
        while(!stk.empty()) stk.pop();

        for(int i=0;i<n;i++){
            while(!stk.empty() && v[stk.top()]>=v[i])
            stk.pop();

            left[i]= stk.empty()? -1 :stk.top();
            stk.push(i);
        }
        int maxi=0;
        for(int i=0;i<n;i++){
            int w= right[i]-left[i]-1;
            int area = v[i]*w;
            maxi=max(maxi,area);
        }
        return maxi;
    }
};