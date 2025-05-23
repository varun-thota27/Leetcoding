class Solution {
public:
    struct compare {
    bool operator()(const pair<string,int>& a, const pair<string,int>& b) const {
        if (a.second == b.second)
            return a.first < b.first; 
        return a.second > b.second;  
    }
};

    vector<string> topKFrequent(vector<string>& words, int k) {
        vector<string> ans;

        unordered_map<string,int> mp;
        for(const string& w:words){
            mp[w]++;
        }

        priority_queue<pair<string,int>,vector<pair<string,int>>,compare> pq;

        for(auto& [word,freq]:mp){
            pq.push({word,freq});

            if(pq.size()>k)
            pq.pop();
        }

        while(!pq.empty()){
            ans.push_back(pq.top().first);
            pq.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};