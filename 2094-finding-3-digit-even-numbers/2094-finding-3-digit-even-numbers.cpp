class Solution {
public:
    bool solve(int n,vector<int> &freq){
        vector<int> temp=freq;
        while(n>0){
            int x=n%10;
            if(temp[x]==0)
            return false;

            temp[x]--;
            n/=10;
        }
        return true;
        
    }
    vector<int> findEvenNumbers(vector<int>& v) {
        vector<int> ans,freq(10,0);

        for(int x:v){
            freq[x]++;
        }
        for(int i=100;i<=998;i+=2){
            if(solve(i,freq))
            ans.push_back(i);
        }
        return ans;
    }
};