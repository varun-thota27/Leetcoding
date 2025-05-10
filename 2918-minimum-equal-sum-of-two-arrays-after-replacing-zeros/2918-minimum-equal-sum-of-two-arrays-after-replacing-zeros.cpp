class Solution {
public:
    long long minSum(vector<int>& v1, vector<int>& v2) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);

        long long sum1=0,sum2=0;
        int c1=0,c2=0;

        for(int x:v1){
            sum1+=x;
            if(x==0)
            c1++;
        }
        for(int x:v2){
            sum2+=x;
            if(x==0)
            c2++;
        }

        if(c1==0 && c2==0)
        return sum1 ==sum2 ? sum1 :-1;
        else if(c1==0)
        return sum2+ c2 <=sum1 ? sum1:-1;
        else if(c2==0)
        return sum1+c1 <=sum2 ? sum2 : -1;

        return max(sum1+c1,sum2+c2);
    }
};