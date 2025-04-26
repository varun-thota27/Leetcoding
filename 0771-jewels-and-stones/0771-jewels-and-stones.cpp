class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        
        set<char> st;
        for(char x:jewels)
        st.insert(x);
        int c=0;
        for(char x: stones){
            if(st.find(x)!=st.end())
            c++;
        }
        return c;
    }
};