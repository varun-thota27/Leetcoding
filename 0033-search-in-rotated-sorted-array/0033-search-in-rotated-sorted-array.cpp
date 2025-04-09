class Solution {
public:
    int search(vector<int>& v, int target) {
        
        int n=v.size(),st=0,end=n-1,mid=st+(end-st)/2;
        while(st<=end){
             mid=st+(end-st)/2;
            if(v[mid]==target)return mid;

            if(v[st]<=v[mid]){
                if(v[st]<=target && target<=v[mid])
                    end=mid-1;
                else
                st=mid+1;
            }
            else
            {
                if(v[mid]<=target && target <=v[end])
                 st=mid+1;
                 else
                 end=mid-1;
            }
        }
        return -1;
    }
};