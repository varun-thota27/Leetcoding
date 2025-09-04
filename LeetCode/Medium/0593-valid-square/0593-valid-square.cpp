class Solution {
public:
    int distSq(vector<int>& p1, vector<int>& p2) {
        int dx = p1[0] - p2[0];
        int dy = p1[1] - p2[1];
        return dx*dx + dy*dy;
    }

    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        vector<vector<int>> pts = {p1, p2, p3, p4};
        vector<int> dists;
        
        for (int i = 0; i < 4; i++) {
            for (int j = i+1; j < 4; j++) {
                dists.push_back(distSq(pts[i], pts[j]));
            }
        }
        
        sort(dists.begin(), dists.end());
        
        return dists[0] > 0 &&
               dists[0] == dists[1] &&
               dists[1] == dists[2] &&
               dists[2] == dists[3] &&  
               dists[4] == dists[5] &&  
               dists[4] == 2 * dists[0]; 
    }
};
