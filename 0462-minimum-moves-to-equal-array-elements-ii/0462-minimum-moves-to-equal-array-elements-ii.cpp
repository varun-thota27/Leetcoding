class Solution {
public:
    int minMoves2(vector<int>& v) {
        int c=0;
        sort(v.begin(),v.end());
        int mid=v[v.size()/2];
        for(int x:v){
            c+= abs(x-mid);
        }
        return c;
    }
};