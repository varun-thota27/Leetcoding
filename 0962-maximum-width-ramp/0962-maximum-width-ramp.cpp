class Solution {
public:
    int maxWidthRamp(vector<int>& v) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
       stack<int> s;
       for(int i=0;i<v.size();i++)
       {
        if(s.empty() || v[s.top()]>v[i])
        s.push(i);
       }

       int maxi=0;
       for(int j=v.size()-1;j>=0;j--)
       {
        while(!s.empty() && v[s.top()]<=v[j])
        {
            maxi=max(maxi,j-s.top());
            s.pop();
        }
       }
       return maxi;
    }
};