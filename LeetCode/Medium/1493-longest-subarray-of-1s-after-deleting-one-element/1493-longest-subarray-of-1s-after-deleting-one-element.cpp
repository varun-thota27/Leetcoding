class Solution {
public:
    int longestSubarray(vector<int>& v) {
        int n=v.size();
        int lt=0,zeros=0,maxi=0;
        for(int i=0;i<n;i++){
            if(v[i]==0){
                zeros++;
            }
            while(zeros>1){
                if(v[lt]==0) zeros--;

                lt++;
            }
            maxi=max(maxi,i-lt);
        }
        return maxi;
    }
};