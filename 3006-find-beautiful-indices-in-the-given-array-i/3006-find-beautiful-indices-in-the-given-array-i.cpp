class Solution {
public:
    vector<int> solve(string &temp,string&s)
    {
        vector<int> res;
        if(temp.length()>s.length())
        return res;
        for(int i=0;i<=s.length()-temp.length();i++)
        {
            if(s.substr(i,temp.length())==temp)
            res.push_back(i);
        }
        return res;
    }
    vector<int> beautifulIndices(string s, string a, string b, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        vector<int> ans;
        vector<int> v1=solve(a,s);
        vector<int> v2=solve(b,s);

        for(int i=0;i<v1.size();i++)
        {
            for(int j=0;j<v2.size();j++)
            {
                if(abs(v1[i]-v2[j])<=k){
                    ans.push_back(v1[i]);
                    break;
                }
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};