class Solution {
public:
    bool isPalindrome(string &s,int st,int end)
    {
        while(st<end){
            if(s[st]!=s[end])
            return false;

            st++;
            end--;
        }
        return true;
    }
    void solve(string &s,int i,vector<vector<string>>& ans,vector<string>& temp){
        if(i==s.length()){
            ans.push_back(temp);
            return;
        }

        for(int j=i;j<s.length();j++)
        {
            if(isPalindrome(s,i,j)){
                temp.push_back(s.substr(i,j-i+1));
                solve(s,j+1,ans,temp);
                temp.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;

        solve(s,0,ans,temp);
        return ans;
    }
};