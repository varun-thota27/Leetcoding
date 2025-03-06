class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& v) {
        
        int n=v.size();
        int m=v[0].size(),total=n*m;
        vector<int> ans(total+1,0);
        int rep=-1,mis=-1;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++){
                ans[v[i][j]]++;
            }
        }
        for(int i=1;i<=total;i++){
            if(ans[i]==2)
            rep=i;
            if(ans[i]==0)
            mis=i;
        }
        return {rep,mis};
    }
};