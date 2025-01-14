class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> C(n, 0);
        vector<bool> seen(n + 1, false);
        int cnt = 0;

        for (int i = 0; i < n; ++i) {
            if (seen[A[i]]) cnt++;
            if (seen[B[i]]) cnt++;

            if (A[i] == B[i]) cnt++;
            else {
                seen[A[i]] = true;
                seen[B[i]] = true;
            }
            C[i] = cnt;
        }
        return C;
    }
};
