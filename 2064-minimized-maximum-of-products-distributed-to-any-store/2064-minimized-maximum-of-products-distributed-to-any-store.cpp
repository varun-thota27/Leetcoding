class Solution {
public:
    bool isPossible(int n,vector<int>&v,int mid){
        int c=0;
        for(auto x:v){
            c+=x/mid;
            if(x%mid) c++;
            if(c>n) return 0;
        }
        return c<=n;
    }
    int minimizedMaximum(int n, vector<int>& v) {
        int s=1,e=100000,ans=-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(isPossible(n,v,mid)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
};