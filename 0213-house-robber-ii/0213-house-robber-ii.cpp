class Solution {
public:
    int rob(vector<int>& v) {
        int n=v.size();
        if(n==1)
        return v[0];
        return max(solve(v,0,n-2),solve(v,1,n-1));
    }

    int solve(vector<int>&v,int st,int end){
        int prev=0,maxi=0;
        for(int i=st;i<=end;i++)
        {
            int cur=max(maxi,v[i]+prev);
            prev=maxi;
            maxi=cur;
        }
        return maxi;
    }
};