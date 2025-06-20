class Solution {
public:
    int maxDistance(string s, int k) {
        int ans = 0;
        int n = 0, so = 0, e = 0, w = 0;
        
        for (int i = 0; i < s.length(); i++) {
            char c = s[i];
            if (c == 'N') n++;
            else if (c == 'S') so++;
            else if (c == 'E') e++;
            else if (c == 'W') w++;
            
            int x = abs(n - so);
            int y = abs(e - w);
            int mid = x + y;
            int dis = mid + min(2 * k, i + 1 - mid);
            ans = max(ans, dis);
        }
        
        return ans;
    }
};