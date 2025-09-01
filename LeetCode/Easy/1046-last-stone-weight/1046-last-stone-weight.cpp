class Solution {
public:
    int lastStoneWeight(vector<int>& v) {

        priority_queue<int,vector<int>> pq;
        if(v.size()==1) return v[0];
        for(int x:v) pq.push(x);

        while(pq.size()!=1){
            int x=pq.top();
            pq.pop();
            int y=pq.top();
            pq.pop();

            if(x!=y){
                pq.push(x-y);
            }

            if(pq.empty()) return 0;
        }
        return pq.top();
    }
};