class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        string res="";
        sort(v.begin(),v.end());
        int n=v.size();
        string x=v[0],y=v[n-1];
        int n1=x.size(),n2=y.size();
        for(int i=0;i<min(n1,n2);i++)
        {
            if(x[i]!=y[i])
            return res;

            res+=x[i];
        }
        return res;
        
    }
};