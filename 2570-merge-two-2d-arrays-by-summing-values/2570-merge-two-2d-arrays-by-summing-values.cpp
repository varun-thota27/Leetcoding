class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& v1, vector<vector<int>>& v2) {


        vector<vector<int>> ans;
        int i=0,j=0;

        while(i<v1.size() && j<v2.size())
        {
            int i1=v1[i][0],x=v1[i][1];
            int j1=v2[j][0],y=v2[j][1];

            if(i1<j1){
                ans.push_back({i1,x});
                i++;
            }
            else if(i1>j1){
                ans.push_back({j1,y});
                j++;
            }
            else{
                ans.push_back({i1,x+y});
                i++;
                j++;
            }
        }
        while(i<v1.size()){
            ans.push_back(v1[i]);
            i++;
        }
        while(j<v2.size()){
            ans.push_back(v2[j]);
            j++;
        }
        return ans;
    }
};