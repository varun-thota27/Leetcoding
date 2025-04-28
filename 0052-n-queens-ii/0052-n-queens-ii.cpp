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
    int queens(vector<string> &v,int n,int row,int &c){
        if(row==n){
            c++;
        }

        for(int j=0;j<n;j++){
            if(isSafe(v,row,j,n)){
                v[row][j]='Q';
                queens(v,n,row+1,c);
                v[row][j]='.';
            }
        }
        return c;
    }
    int totalNQueens(int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        vector<string> v(n,string(n,'.'));
        int c=0;

       int ans= queens(v,n,0,c);

       return ans;
        
    }
};