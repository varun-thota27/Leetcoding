class Solution {
public:
    int maxNumOfMarkedIndices(vector<int>& v) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int c=0,n=v.size();
        int i=0,j=n/2;
        sort(v.begin(),v.end());
        while(i<n/2 && j<n){
            if(v[i] * 2<=v[j]){
                i++;
                j++;
                c+=2;
            }
            else
            j++;
        }
        return c;
    }
};