class Solution {
public:
    int findChampion(int n, vector<vector<int>>& v) {
        bitset<100> s; 
        
        for(const auto& x : v) {
            s.set(x[1]);
        }
        
        int c = -1;
        for (int i = 0; i < n; i++) {
            if (!s[i]) {
                if (c != -1) return -1;
                c = i;
            }
        }
        return c;
    }
};