class Solution {
public:
    int compress(vector<char>& chars) {
        
        int len=0,i=0;
        while(i<chars.size()){

            int c=0;
            char cur=chars[i];
            while(i<chars.size() && cur==chars[i]){
                c++;
                i++;
            }
            chars[len++]=cur;

            if(c>1){
                for(char x: to_string(c))
                    chars[len++]=x;
            }
        }
        return len;
    }
};
