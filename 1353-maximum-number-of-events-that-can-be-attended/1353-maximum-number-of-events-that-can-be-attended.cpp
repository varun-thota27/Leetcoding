class Solution {
public:
    int maxEvents(vector<vector<int>>& v) {
        sort(v.begin(), v.end());
        
        priority_queue<int, vector<int>, greater<int>> pq;
        
        int day = 0, i = 0, n = v.size(), ans = 0;
        
        while (!pq.empty() || i < n) {
            if (pq.empty()) {
                day = v[i][0];
            }
            while (i < n && v[i][0] <= day) {
                pq.push(v[i][1]);
                i++;
            }
            pq.pop();
            ans++;
            day++;
            
            while (!pq.empty() && pq.top() < day) {
                pq.pop();
            }
        }
        return ans;
    }
};