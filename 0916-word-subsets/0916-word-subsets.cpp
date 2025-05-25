class Solution {
public:
    vector<string> wordSubsets(vector<string>& w1, vector<string>& w2) {

        int maxi[26]={0};

        for(const string& x:w2){
            int count[26]={0};
            for(char ch:x){
                count[ch-'a']++;
            }

            for(int i=0;i<26;i++)
                maxi[i]=max(maxi[i],count[i]);
        }
        vector<string> ans;

        for(const string& w:w1){
            int count[26]={0};
            for(char x:w){
                count[x-'a']++;
            }

            int f=1;
            for(int i=0;i<26;i++){
                if(count[i]<maxi[i]){
                    f=0;
                    break;
                }
            }
            if(f)
            ans.push_back(w);
        }
        return ans;
    }
};