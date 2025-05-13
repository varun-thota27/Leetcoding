class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int> v(1001,0);
        int c=0;

        for(auto x:trips){
            int n=x[0],from=x[1],to=x[2];

            v[from]+=n;
            v[to]-=n;
        }
        for(int i=0;i<1000;i++){
            c+=v[i];
            if(c>capacity)
            return false;
        }
        return true;
    }
};