class Solution {
public:
    vector<int> diffWaysToCompute(string s) {
        vector<int> res;
        for (int i = 0; i < s.size(); ++i) {
            char x = s[i];
            if (x == '+' || x == '-' || x == '*') {
                vector<int> s1 = diffWaysToCompute(s.substr(0, i));
                vector<int> s2 = diffWaysToCompute(s.substr(i + 1));
                for (int a : s1) {
                    for (int b : s2) {
                        if (x == '+') res.push_back(a + b);
                        else if (x == '-') res.push_back(a - b);
                        else if (x == '*') res.push_back(a * b);
                    }
                }
            }
        }
        if (res.empty()) res.push_back(stoi(s));
        return res;
    }
};