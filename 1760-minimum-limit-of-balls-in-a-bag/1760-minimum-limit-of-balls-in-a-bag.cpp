class Solution {
public:
    int minimumSize(vector<int>& v, int maxOps) {
        int low = 1, high = *max_element(v.begin(),v.end());
        while (low < high) {
            int mid = low + (high - low) / 2;
            int c = 0;
            for (int x : v) 
                 if ((c += (x - 1) / mid) > maxOps)
                  break;
            c <= maxOps ? high = mid : low = mid + 1;
        }
        return high;
    }
};