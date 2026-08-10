class Solution {
public:
    vector<int> findMissingElements(vector<int>& v) {
        vector<int> ans;
        int n=v.size();
        unordered_set<int> st(v.begin(),v.end());

        int low=*min_element(v.begin(),v.end());
        int high=*max_element(v.begin(),v.end());

        for(int i=low;i<=high;i++){
            if(!st.count(i)){
                ans.push_back(i);
            }
        }
        return ans;
    }
};