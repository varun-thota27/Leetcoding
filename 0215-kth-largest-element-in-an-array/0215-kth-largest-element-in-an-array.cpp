class Solution {
public:
    int findKthLargest(vector<int>& v, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        priority_queue<int> q(v.begin(),v.end());

        for(int i=0;i<k-1;i++)
        q.pop();

        return q.top();
        
    }
};