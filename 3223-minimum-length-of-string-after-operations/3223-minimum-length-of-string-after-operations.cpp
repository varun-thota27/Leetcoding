class Solution {
public:
    int minimumLength(string s) {
        
        vector<int> v(26,0);
        int len=0;

        for(char x:s)
        {
            v[x-'a']++;
        }
        for(int x:v)
        {
            if(x==0)
            continue;

            len += (x%2==0)? 2:1;
        }
        return len;
    }
};