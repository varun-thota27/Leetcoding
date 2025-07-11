class Solution {
public:
    vector<string> summaryRanges(vector<int>& v) {
        
        vector<string> ans;
        int st=0;
        if(v.empty()) return ans;

        for(int i=1;i<v.size();i++){
            if(v[i]!=v[i-1]+1){
                if(st==i-1)
                ans.push_back(to_string(v[st]));
                else
                ans.push_back(to_string(v[st])+ "->" + to_string(v[i-1]));

                st=i;
            }
        }
        if(st==v.size()-1)
            ans.push_back(to_string(v[st]));
        else
            ans.push_back(to_string(v[st])+"->"+to_string(v.back()));

        return ans;
    }
};