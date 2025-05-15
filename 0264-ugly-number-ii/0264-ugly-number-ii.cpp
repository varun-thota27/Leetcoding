class Solution {
public:
    int nthUglyNumber(int n) {
        
        priority_queue<long long, vector<long long>,greater<long long>> pq;
        unordered_set<long long > vis;
        long long ans=1;
        vis.insert(1);
        pq.push(1);

        for(int i=0;i<n;i++)
        {
            ans=pq.top();
            pq.pop();

            if(vis.insert(ans*2).second)
            pq.push(ans*2);
            if(vis.insert(ans*3).second)
            pq.push(ans*3);
            if(vis.insert(ans*5).second)
            pq.push(ans*5);
        }
        return ans;
    }
};