class Solution {
public:
    int longestOnes(vector<int>& v, int k) {

        int c=0,lt=0,rt=0,len=0,n=v.size();
    
       while(rt<n){
        if(v[rt]==0)
            c++;
        
        if(c<=k)
            len=max(len,rt-lt+1);
        else{
            while(v[lt]!=0){
                lt++;
            }
            c--;
            lt++;
        }
        rt++;
    }
       return len; 
    }
};