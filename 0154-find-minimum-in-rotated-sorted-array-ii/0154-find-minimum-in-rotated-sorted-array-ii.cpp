class Solution {
public:
    int findMin(vector<int>& v) {
        return *min_element(v.begin(),v.end());
        
    }
};