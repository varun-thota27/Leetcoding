class Solution {
public:
    string addBinary(string a, string b) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        string s;
        int c=0;
        int i=a.length()-1,j=b.length()-1;

        while(i>=0 || j>=0 || c)
        {
            if(i>=0)
            c+=a[i--]-'0';
            if(j>=0)
              c+=b[j--]-'0';
            s+=c%2 + '0';
            c/=2;
        }
        reverse(s.begin(),s.end());
        return s;
        
    }
};