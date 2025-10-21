class Solution {
public:
    bool judgeSquareSum(int c) {
        
        int st=0,end=sqrt(c);

        while(st<=end){
            long ans= st*st;
            ans+= end*end;

            if(ans==c) return true;
            else if(ans>c){
                end--;
            }
            else
            st++;
        }
        return false;
    }
};