class Solution {
public:
    long long continuousSubarrays(vector<int>& v) {
        
    int st = 0, c = 0;
    deque<int> minDeque, maxDeque;

    for (int end = 0; end < v.size(); ++end) {
        while (!minDeque.empty() && v[minDeque.back()] >= v[end]) {
            minDeque.pop_back();
        }
        minDeque.push_back(end);

        while (!maxDeque.empty() && v[maxDeque.back()] <= v[end]) {
            maxDeque.pop_back();
        }
        maxDeque.push_back(end);

        while (v[maxDeque.front()] - v[minDeque.front()] > 2) {
            if (minDeque.front() == st) minDeque.pop_front();
            if (maxDeque.front() == st) maxDeque.pop_front();
            st++;
        }

        c += (end - st + 1);
    }

    return c;
    }
};