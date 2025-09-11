class Solution {
public:
    // static bool compare(const char &a,const char &b){
    //     return a>b;
    // }
    string sortVowels(string s) {
        vector<char> v;
        string vow="aeiouAEIOU";
        for(char x:s){
            if(vow.find(x)!=string::npos){
                v.push_back(x);
            }
        }
        sort(v.begin(),v.end());
        string ans="";
        int i=0;
        for(char x:s){
            if(vow.find(x)!=string::npos){
                ans+=v[i++];
            }
            else ans+=x;
        }
        return ans;
    }
};