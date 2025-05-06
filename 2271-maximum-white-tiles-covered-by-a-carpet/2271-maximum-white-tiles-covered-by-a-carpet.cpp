class Solution {
public:
    int maximumWhiteTiles(vector<vector<int>>& v, int len) {
        sort(v.begin(), v.end());
        int n=v.size(),maxi=0,lt=0,c=0;

        for (int rt=0; rt<n; rt++)
         {
            c += (v[rt][1]-v[rt][0]+1);

            while (v[rt][1]-v[lt][0]+1 > len) {
                if (v[lt][1]-v[lt][0]+1 <= v[rt][1]-v[lt][0]+1 - len) {
                    c -= (v[lt][1]-v[lt][0]+1);
                    lt++;
                } 
                else 
                    break;
            }

            int st=v[rt][1]-len+1;
            int par = c;
            if (v[lt][0]<st) 
                par -=(st-v[lt][0]);

            maxi = max(maxi,par);
        }
        return maxi;
    }
};