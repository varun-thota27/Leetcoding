class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        int c=0;
        stringstream ss(text);
        string word;
        while(ss>> word){
            int f=1;
            for(char x:brokenLetters){
                if(word.find(x)!=string::npos){
                    f=0;
                    break;
                }
            }
            if(f)c++;
        }
        return c;
    }
};