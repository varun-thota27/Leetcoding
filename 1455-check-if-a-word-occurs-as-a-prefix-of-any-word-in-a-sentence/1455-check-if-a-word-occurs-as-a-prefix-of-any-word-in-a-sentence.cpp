class Solution {
public:
    int isPrefixOfWord(string sentence, string k) {
        
        stringstream ss(sentence);
        string word;
        int i=1;
        while(ss>>word)
        {
            if(word.find(k)==0)
            return i;

            i++;
        }
        return -1;
    }
};