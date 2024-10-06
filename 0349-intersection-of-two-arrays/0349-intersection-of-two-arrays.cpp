class Solution {
public:
    vector<int> intersection(vector<int>& v1, vector<int>& v2) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int> v;
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end());
        
        int n = v1.size();
        int m = v2.size();
        int i = 0, j = 0;

        while (i < n && j < m) {
            if (v1[i] == v2[j]) {
                if (v.empty() || v.back() != v1[i]) {
                    v.push_back(v1[i]);
                }
                i++;
                j++;
            }
            else if (v1[i] < v2[j]) {
                i++;
            }
            else {
                j++;
            }
        }

        return v;
    }
};