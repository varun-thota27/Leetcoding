class Solution {
public:
    int longestConsecutive(vector<int>& v) {
        
        unordered_set<int> st(v.begin(),v.end());
        int maxi=0;

        for(int x:st){
            if(st.find(x-1)==st.end()){
                int c=1;

                while(st.find(x+c)!=st.end())
                c++;

                maxi=max(maxi,c);
            }
        }
        return maxi;
    }
};