class Solution {
public:

    bool isSame(int freq1[],int freq2[]){
        for(int i=0;i<26;i++){
            if(freq1[i]!=freq2[i])
            return false;
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        int freq[26]={0};

        for(int i=0;i<s1.length();i++){
            freq[s1[i]-'a']++;
        }

        for(int j=0;j<s2.length();j++){
            int win[26]={0};
            int idx=j,i=0;
            while(i<s1.length() && idx<s2.length()){
            win[s2[idx]-'a']++;
            i++;
            idx++;
        }
         if(isSame(freq,win))
            return true;
    }
        return false;
    }
};