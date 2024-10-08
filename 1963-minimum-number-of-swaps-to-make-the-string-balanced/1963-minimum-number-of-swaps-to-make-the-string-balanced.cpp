class Solution {
public:
    int minSwaps(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int c=0;
        int mini=0;
        for(char x:s)
        {
           if(x=='[')
           c++;
           else
           c--;
           mini=min(mini,c);
        }
        int swaps= (abs(mini)+1)/2;
        return swaps;
        
    }
};