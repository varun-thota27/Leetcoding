class Solution {
public:
    int minMoves(vector<int>& v) {

        int mini=*min_element(v.begin(),v.end());
        int c=0;
        for(int x:v){
            c+= x-mini;
        }
        return c;
    }
};