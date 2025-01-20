class Solution {
public:
    bool canChange(string start, string target) {
        if (start == target) {
            return true;
        }
        int l = 0;
        int r = 0;
        
        for (int i = 0; i < start.length(); i++) {
            char cur = start[i];
            char x = target[i];
            if (cur == 'R') {
                if(l > 0) {
                    return false;
                }
                r++;
            }
            if (x == 'L') {
                if (r > 0) {
                    return false;
                }
                l++;
            }
            if (x == 'R') {
                if (r == 0) {
                    return false;
                }
                r--;
            }
            if (cur == 'L') {
                if (l == 0) {
                    return false;
                }
                l--;
            }
        }
        return l == 0 && r == 0;
    }
};