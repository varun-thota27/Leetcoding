class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        unordered_map<string,int> mp;
        vector<string> ans;
        string s=s1 + " " + s2;

        string temp="";
        for(auto& x:s)
        {
            if(x==' '){
                mp[temp]++;
                temp="";
            }
            else
            temp+=x;
        }
        if(temp!=""){
            mp[temp]++;
            temp="";
        }
        for(auto it:mp){
            if(it.second==1)
            ans.push_back(it.first);
        }
        return ans;
    }
};