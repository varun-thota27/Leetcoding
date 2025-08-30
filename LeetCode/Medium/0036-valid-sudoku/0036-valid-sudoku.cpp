class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& v) {
        
        vector<unordered_set<char>> rows(9),cols(9),box(9);

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                
                char c=v[i][j];
                if(c =='.')
                continue;

                
                int idx= (i/3)*3 +(j/3);
                if(rows[i].count(c) || cols[j].count(c) || box[idx].count(c))
                return false;

                rows[i].insert(c);
                cols[j].insert(c);
                box[idx].insert(c);
            }
        }
        return true;
    }
};