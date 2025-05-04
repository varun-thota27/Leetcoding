class Solution {
public:
    int numEquivDominoPairs(vector<vector<int>>& v) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int cnt=0;
        int n=v.size();
        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                int a=v[i][0],b=v[i][1];
                int c=v[j][0],d=v[j][1];
                if((a==c && b==d) || (a==d && b==c)) 
                    cnt++;
            }
        }
        return cnt;
    }
};
