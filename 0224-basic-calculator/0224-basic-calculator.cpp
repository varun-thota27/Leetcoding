class Solution {
public:
    int calculate(string s) {
        stack<int> values, ops;
        int currentNumber = 0, result = 0, sign = 1;
        for (int i = 0; i < s.size(); i++) {
            if (isdigit(s[i])) {
                currentNumber = (currentNumber * 10) + (s[i] - '0');
            } else if (s[i] == '+') {
                result += sign * currentNumber;
                sign = 1;
                currentNumber = 0;
            } else if (s[i] == '-') {
                result += sign * currentNumber;
                sign = -1;
                currentNumber = 0;
            } else if (s[i] == '(') {
                values.push(result);
                ops.push(sign);
                result = 0;
                sign = 1;
            } else if (s[i] == ')') {
                result += sign * currentNumber;
                result *= ops.top();
                ops.pop();
                result += values.top();
                values.pop();
                currentNumber = 0;
            }
        }
        return result + (sign * currentNumber);
    }
};
