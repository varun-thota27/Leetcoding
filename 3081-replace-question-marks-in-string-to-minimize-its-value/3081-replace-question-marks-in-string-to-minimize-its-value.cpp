class Solution {
public:
    string minimizeStringValue(string s) {
        int freq[26]={0};

        for(char x:s){
            if(x!='?')
             freq[x -'a']++;
        }
        vector<char> ans;

        for(char x:s){  
            if(x=='?'){
                int mini=0;
                for(int j=1;j<26;j++){
                    if(freq[j]<freq[mini])
                    mini=j;
                }
                char ch = mini + 'a';
                ans.push_back(ch);
                freq[mini]++;
            }
        }
        sort(ans.begin(), ans.end());

        int j=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='?'){
                s[i]=ans[j];
                j++;
            }
        }
        return s;
    }
};
