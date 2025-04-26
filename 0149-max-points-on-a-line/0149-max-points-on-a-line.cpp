class Solution {
public:
    int maxPoints(vector<vector<int>>& v) {

        int n=v.size();
        if(n==1)
        return 1;

        int maxi=2;
        for(int i=0;i<n-1;i++){

            map<double,int> mp;
            for(int j=0;j<n;j++){
                if(i==j)
                continue;

                int x1=v[i][0];
                int y1=v[i][1];
                int x2=v[j][0];
                int y2=v[j][1];

                double tan=atan2((y2-y1),(x2-x1));
                mp[tan]++;

                maxi=max(maxi,mp[tan]+1);
            }
        }
        return maxi;
    }
};