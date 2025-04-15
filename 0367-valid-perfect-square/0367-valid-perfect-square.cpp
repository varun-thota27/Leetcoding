class Solution {
public:
    bool isPerfectSquare(int n) {

        int low=1,high=n;
        long long mid;

        while(low<=high){
            mid=low+(high-low)/2;

            if(mid * mid ==(long long) n)
            return true;
            else if(mid *mid <(long long)n)
            low=mid+1;
            else 
            high=mid-1;
        }
        return false;
        
    }
};