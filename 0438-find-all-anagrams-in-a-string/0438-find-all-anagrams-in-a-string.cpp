class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int len=p.length();

        if(s.length()<len)
        return {};
        vector<int> ans,freq(26,0),wndw(26,0);

        for(int i=0;i<len;i++){
            freq[p[i]-'a']++;
            wndw[s[i]-'a']++;
        }
        if(freq==wndw) ans.push_back(0);

        for(int i=len;i<s.length();i++){
            wndw[s[i-len]-'a']--;
            wndw[s[i]-'a']++;

            if(freq==wndw)
            ans.push_back(i-len+1);
        }
        return ans;
    }
};