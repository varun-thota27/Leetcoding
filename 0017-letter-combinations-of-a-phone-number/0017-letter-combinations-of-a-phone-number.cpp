class Solution {
public:
    vector<string> letterCombinations(string digits) {
        vector<string> res;
        
        if (digits.empty()) {
            return res;
        }
        
        unordered_map<char, string> mp = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };
        
        solve(digits, 0, "", res, mp);
        
        return res;        
    }

    void solve(const string& digits, int i, string cur, vector<string>& res, const unordered_map<char, string>& mp) {
        if (i == digits.length()) {
            res.push_back(cur);
            return;
        }
        
        string letters = mp.at(digits[i]);
        for (char x : letters) {
            solve(digits, i + 1, cur + x, res, mp);
        }
    }    
};