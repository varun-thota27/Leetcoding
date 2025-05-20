class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& v) {
        priority_queue<pair<int, int>> pq;
        int n=v.size();
        for (int i=0;i<n;i++) 
            pq.push({v[i], i});
        
        vector<string> ans(n);
        int place = 1;
        while (!pq.empty()) {
            int idx = pq.top().second;
            pq.pop();
            if (place == 1) 
                ans[idx] = "Gold Medal";
            else if (place == 2) 
                ans[idx] = "Silver Medal";
            else if (place == 3) 
                ans[idx] = "Bronze Medal";
            else 
                ans[idx] = to_string(place);
            place++;
        }
        return ans;
    }
};