class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
        
        int lt=0,rt=v.size()-1;

        while(lt<rt)
        {
            int sum=v[lt]+v[rt];

            if(sum==target)
            {
                return {lt+1,rt+1};
            }
            else if(sum>target)
            rt--;
            else
            lt++;
        }
        return {-1,-1};
    }
};