class Solution {
public:
    int maxAdjacentDistance(vector<int>& v) {
        int n=v.size();
        int dif= abs(v[0]-v[n-1]);

        for(int i=0;i<n-1;i++){
            dif =max(dif , abs(v[i]-v[i+1]));
        }
        return dif;
    }
};