class Solution {
public:
    vector<int> pivotArray(vector<int>& v, int pivot) {
    
        vector<int> v1,v2,ans(v.size());
        int c=0;
        for(int x:v)
        {
            if(x>pivot)
            v2.push_back(x);
            else if(x<pivot)
            v1.push_back(x);
            else
            c++;
        }
        int i=0;
        for(int x:v1)
        {
            ans[i++]=x;
            // i++;
        }
        for(int j=0;j<c;j++){
            ans[i++]=pivot;
        }
        for(int x:v2){
            ans[i++]=x;
        }
        return ans;
    }
};