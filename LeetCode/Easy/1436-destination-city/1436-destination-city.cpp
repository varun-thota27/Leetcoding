class Solution {
public:
    string destCity(vector<vector<string>>& v) {
        unordered_set<string> st;

        for(auto it: v){
            st.insert(it[0]);
        }
        for(auto it: v){
            const string& ans=it[1];
            if(st.find(ans)==st.end())
            return ans;
        }
        return "";
    }
};