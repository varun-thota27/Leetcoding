class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> v(26, 0);
        for (int i = 0; i < s.length(); i++){
            v[s[i] - 'a'] = i; 
        }
        
        vector<int> vis(26, 0); 
        stack<char> stk;
        
        for (int i = 0; i < s.size(); i++) {
            int x = s[i] - 'a';
            if (vis[x]) 
            continue; 
            while(stk.size()>0 && stk.top()>s[i] && i < v[stk.top() - 'a']){
                vis[stk.top() - 'a'] = 0; 
                stk.pop();
            }
            stk.push(s[i]); 
            vis[x] = 1; 
        }
        
        string ans = "";
        while (stk.size() > 0){
            ans += stk.top();
            stk.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};