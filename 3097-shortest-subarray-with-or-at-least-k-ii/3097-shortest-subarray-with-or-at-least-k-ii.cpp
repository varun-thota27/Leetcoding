class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
         int n = nums.size();
        vector<int> v(32, 0);
        int cur = 0;
        int left = 0;
        int mini = INT_MAX;
        
        for (int right = 0; right < n; right++) {
            cur |= nums[right];
            
            for (int bit = 0; bit < 32; bit++) {
                if (nums[right] & (1 << bit)) {
                    v[bit]++;
                }
            }
            
            while (left <= right && cur >= k) {
                mini = min(mini, right - left + 1);
                
                int updatedOR = 0;
                for (int bit = 0; bit < 32; bit++) {
                    if (nums[left] & (1 << bit)) {
                        v[bit]--;
                    }
                    if (v[bit] > 0) {
                        updatedOR |= (1 << bit);
                    }
                }
                cur = updatedOR;
                left++;
            }
        }
        
        return mini == INT_MAX ? -1 : mini;
    }
};