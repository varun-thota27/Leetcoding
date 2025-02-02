class Solution {
public:
    double findMedianSortedArrays(vector<int>& v1, vector<int>& v2) {

        int n1=v1.size(),n2=v2.size();
        v1.insert(v1.end(),v2.begin(),v2.end());
        sort(v1.begin(),v1.end());
        
        if((n1+n2)%2!=0)
        return v1[(n1+n2)/2];

        double ans=(v1[(n1+n2)/2]+v1[((n1+n2)/2)-1])/2.0;
        return ans;
    }
};