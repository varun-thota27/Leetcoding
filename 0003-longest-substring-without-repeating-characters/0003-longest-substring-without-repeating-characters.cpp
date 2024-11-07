class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int maxi=0,j=0;
        unordered_set<char> st;
        for(int i=0;i<n;i++)
        {
           if(st.count(s[i])==0){
           st.insert(s[i]);
           maxi=max(maxi,i-j+1);
           }
           else
           {
            while(st.count(s[i])){
                st.erase(s[j]);
                j++;
            }
            st.insert(s[i]);
           }
        }
        return maxi;
    }
};