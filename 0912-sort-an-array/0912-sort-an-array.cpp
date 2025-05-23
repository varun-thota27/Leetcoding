class Solution {
public:
    vector<int> sortArray(vector<int>& v) {
        vector<int> ans;

        priority_queue<int, vector<int>,greater<int>> pq;

        for(int x:v){
            pq.push(x);
        }
        for(int i=0;i<v.size();i++){
            ans.push_back(pq.top());
            pq.pop();
        }
        return ans;
    }
};