class Solution {
public:
    bool isBipartite(vector<vector<int>>& v) {
        int n = v.size();
        vector<int> color(n, -1);

        for (int i = 0; i < n; i++) {
            if (color[i] == -1) {
                queue<int> q;
                q.push(i);
                color[i] = 0;

                while (!q.empty()) {
                    int node = q.front();
                    q.pop();

                    for (auto it : v[node]) {
                        if (color[it] == -1) {
                            color[it] = !color[node];
                            q.push(it);
                        } else if (color[it] == color[node]) {
                            return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};
