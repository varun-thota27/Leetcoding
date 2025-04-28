class Solution {
public:
    bool isSafe(vector<string> &v,int row,int col,int n){

        for(int i=0;i<n;i++){
            if(v[i][col]=='Q')
            return false;
        }
        for(int j=0;j<n;j++){
            if(v[row][j]=='Q')
            return false;
        }

        for(int i=row,j=col;i>=0 && j>=0;i--,j--){
            if(v[i][j]=='Q')
            return false;
        }

        for(int i=row,j=col;i>=0 && j<n;i--,j++){
            if(v[i][j]=='Q')
            return false;
        }
        return true;
    }
    void queens(vector<string> &v,int n,vector<vector<string>> &ans,int row){
        if(row==n){
            ans.push_back(v);
            return;
        }

        for(int j=0;j<n;j++){
            if(isSafe(v,row,j,n)){
                v[row][j]='Q';
                queens(v,n,ans,row+1);
                v[row][j]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        vector<string> v(n,string(n,'.'));
        vector<vector<string>> ans;

        queens(v,n,ans,0);
        return ans;
    }
};