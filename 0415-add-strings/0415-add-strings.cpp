class Solution {
public:
    string addStrings(string s1, string s2) {
        string res="";
        int i=s1.size()-1,j=s2.size()-1,carry=0;

        while(i>=0 || j>=0 || carry){
            int n1=(i>=0) ? s1[i]-'0' : 0;
            int n2=(j>=0) ? s2[j]-'0' : 0;
            int sum = n1+n2+carry;
            
            res.push_back((sum % 10) + '0');
            carry = sum / 10;
            
            i--;
            j--;
        }

        reverse(res.begin(), res.end());
        return res;
    }
};
