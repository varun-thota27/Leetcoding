class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v) {

        vector<vector<int>> ans;
        sort(v.begin(),v.end());

        for(int i=0;i<v.size();i++)
        {
            if(i!=0 && v[i]==v[i-1])
            continue;

            int j=i+1,k=v.size()-1;

            while(j<k)
            {
                int sum=v[i]+v[j]+v[k];
                if(sum==0){
                    vector<int> temp={v[i],v[j],v[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j<k && v[j]==v[j-1]) j++;
                    while(j<k && v[k]==v[k+1]) k--;
                }
                else if(sum<0)
                j++;
                else 
                k--;
            }
        }
        return ans;
    }
};