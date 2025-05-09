class Solution {
public:
    bool reorderedPowerOf2(int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int x = n;
        unordered_map<int, int> mp;
        while(x > 0) {
            int r = x % 10;
            mp[r]++;
            x /= 10;
        }

        for(int i=0; i<31; i++) {
            int pow = 1 << i;
            unordered_map<int, int> mp1;
            while(pow > 0) {
                int r = pow % 10;
                mp1[r]++;
                pow/=10;
            }

            if(mp1 == mp) 
            return true;
        }

        return false;
    }
};