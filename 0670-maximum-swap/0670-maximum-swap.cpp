class Solution {
public:
    int maximumSwap(int n) {
        
        string s=to_string(n);
        int len=s.length();
        int maxi=0;
        vector<int>v (10,-1);
        for(int i=0;i<len;i++)
        {
            v[s[i]-'0']=i;
        }
        for(int i=0;i<len;i++)
        {
            for(int j=9;j>s[i]-'0';j--)
            {
                if(v[j]>i){
                swap(s[i],s[v[j]]);
                return stoi(s);
                }
            }
        }

        return n;

    }
};