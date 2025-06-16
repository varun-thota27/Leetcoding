class Solution {
public:
    int maximumDifference(vector<int>& v) {
        int maxi=-1,n=v.size();

        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(v[j]>v[i])
                maxi=max(maxi , abs(v[i]-v[j]));
            }
        }
        return maxi;
    }
};