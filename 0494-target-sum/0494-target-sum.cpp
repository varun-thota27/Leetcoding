class Solution {
public:
    int c = 0;  
    int findTargetSumWays(std::vector<int>& nums, int target) {
        calculateWays(nums, 0, 0, target);
        return c;
    }

private:
    void calculateWays(std::vector<int>& nums, int i, int sum, int target) {
        if (i == nums.size()) {
            if (sum == target) {
                c++;
            }
        } else {
            calculateWays(nums, i + 1,sum + nums[i], target);
            calculateWays(nums, i + 1, sum - nums[i], target);
        }
    }
};