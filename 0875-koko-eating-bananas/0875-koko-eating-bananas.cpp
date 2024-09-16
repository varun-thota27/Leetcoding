class Solution {
    private:

    long long fun(vector<int>& v,int hour)
    {
        long long total=0;
        for(int i=0;i<v.size();i++)
        {
            total += ceil(double(v[i])/(double)hour);
        }
        return total;
    }
public:
    int minEatingSpeed(vector<int>& v, int h) {
        int st=1;
        long long maxi=*max_element(v.begin(),v.end());
        long long end=maxi;
        // int ans=INT_MAX;
        while(st<=end)
        {
            long long mid=st +(end-st)/2;
            long long req=fun(v,mid);
            if(req<=h)
            {
                // ans=mid;
                end=mid-1;
            }
            else
            st=mid+1;
        }

        return st;
    }
};