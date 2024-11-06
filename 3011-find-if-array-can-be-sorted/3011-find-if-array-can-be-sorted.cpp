class Solution {
public:
    bool canSortArray(vector<int>& nums) {
        const uint8_t n = nums.size();
    uint16_t maxPrev = 0, minCur = 0, maxCur = 0;
    uint8_t cntPrev = 0;

    for (const uint16_t val : nums) {
         if (const uint8_t cntCur = popcount(val); cntPrev == cntCur) {
        minCur = min(minCur, val);
        maxCur = max(maxCur, val);
    }
     else if (minCur < maxPrev) {
        return false;
    } else {
        maxPrev = maxCur;
        minCur = maxCur = val;
        cntPrev = cntCur;
    }
}
return minCur >= maxPrev;



    }
};