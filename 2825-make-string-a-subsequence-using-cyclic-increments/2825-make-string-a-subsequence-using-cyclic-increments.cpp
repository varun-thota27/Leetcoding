class Solution {
public:
    bool canMakeSubsequence(string source, string target) {
        int i = 0;
        int len = target.length();
        for (char x : source) {
            if (i < len && (target[i] - x + 26) % 26 <= 1) {
                i++;
            }
        }
        return i == len;
    }
};