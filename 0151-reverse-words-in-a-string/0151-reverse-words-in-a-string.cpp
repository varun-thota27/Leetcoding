class Solution {
public:
    string reverseWords(string s) {

        istringstream stream(s);
        vector<string> v;
        string w;

        while(stream>> w)
         v.push_back(w);

        reverse(v.begin(),v.end());
        string ans;
        for(const auto& w:v)
          ans+= w + " ";

        if(!ans.empty())
         ans.pop_back();

        return ans;
        
    }
};