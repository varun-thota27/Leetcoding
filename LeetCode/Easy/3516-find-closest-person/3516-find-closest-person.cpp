class Solution {
public:
    int findClosest(int x, int y, int z) {

        if(abs(z-x) < abs(y-z))
            return 1;
        else if(abs(z-x) > abs(y-z))
            return 2;
        
        return 0;
    }
};