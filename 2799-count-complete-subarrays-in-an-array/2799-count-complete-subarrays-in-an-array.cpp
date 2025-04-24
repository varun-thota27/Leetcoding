class Solution {
public:
    int countCompleteSubarrays(vector<int>& v) {

        unordered_set<int> st(v.begin(),v.end());
        int size=st.size();
        int c=0;
        for(int i=0;i<v.size();i++)
        {
            unordered_set<int> st1;
            for(int j=i;j<v.size();j++)
            {
                st1.insert(v[j]);
                if(st1.size()==size)
                c++;
            }
            
        }
        return c;
        
    }
};