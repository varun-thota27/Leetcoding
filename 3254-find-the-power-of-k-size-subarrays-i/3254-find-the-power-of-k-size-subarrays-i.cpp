class Solution {
public:
    vector<int> resultsArray(vector<int>& v, int k) {
        vector<int> res;
        int j=0;
        int c=1;
        for (int i = 0; i < v.size(); i++) {
            if (i>0 && v[i-1] + 1 == v[i]) {
                c++;
            }
            if(i-j+1 > k) {
                if (v[j] + 1 == v[j+1]) {
                    c--;
                }
                j++;
            }
            
            if (i - j + 1 == k) {
                res.push_back(c == k ? v[i] : -1);
            }
        }
        
        return res;
    }
};