class Solution {
public:
    vector<int> memLeak(int m1, int m2) {
        int i=1;

        while(max(m1,m2)>=i){
            if(m1>=m2)
            m1-=i;
            else
            m2-=i;

            i++;
        }
        return {i,m1,m2};
        
    }
};