class Solution {
public:
    int longestPalindrome(vector<string>& v) {
        int c=0;

        unordered_map<string,int> mp;

        for(const string& w:v){
            string rev=w;
            reverse(rev.begin(),rev.end());

            if(mp[rev]>0){
                mp[rev]--;
                c+=4;
            }
            else
            mp[w]++;
        }

        for(auto& [w,cnt]:mp){
            if(w[0]==w[1] && cnt>0){
                c+=2;
                break;
            }
        }
        return c;
    }
};