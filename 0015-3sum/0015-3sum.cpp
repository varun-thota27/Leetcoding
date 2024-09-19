class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& v) {

        sort(v.begin(),v.end());
        vector<vector<int>> ans;

        for(int i=0;i<v.size();i++)
        {
            if(i>0 && v[i]==v[i-1])
            continue;
            int j=i+1;
            int k=v.size()-1;
            while(i != j && i != k && j<k){
            int sum=v[i]+v[j]+v[k];

            if(sum<0)
            j++;
            else if(sum>0)
            k--;
            else
            {
                vector<int> temp={v[i],v[j],v[k]};
                ans.push_back(temp);
                j++; 
                k--;

                while( j<k && v[j]==v[j-1])
                j++;

            }
          }
        }
        return ans;
    }
};