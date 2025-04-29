class Solution {
public:
    bool isSafe(vector<vector<char>>& v,int row,int col,char dig){

        for(int j=0;j<9;j++){
            if(v[row][j]==dig)
            return false;
        }

        for(int i=0;i<9;i++){
            if(v[i][col]==dig)
            return false;
        }

        int srow=(row/3)*3,scol=(col/3)*3;
        for(int i=srow;i<=srow+2;i++){
            for(int j=scol;j<=scol+2;j++){
                if(v[i][j]==dig)
                return false;
            }
        }
        return true;
    }
    bool helper(vector<vector<char>>& v,int row,int col){
        if(row==9)
        return true;

        int nextRow=row,nextCol=col+1;
        if(nextCol==9){
        nextRow=row+1;
        nextCol=0;
        }
        if(v[row][col]!='.')
        {
            return helper(v,nextRow,nextCol);
        }

        for(char i='1';i<='9';i++){
            if(isSafe(v,row,col,i)){
                v[row][col]=i;
                if(helper(v,nextRow,nextCol))
                    return true;

                v[row][col]='.';
            }
        }
        return false;
    }
    void solveSudoku(vector<vector<char>>& v) {
        helper(v,0,0);
    }
};