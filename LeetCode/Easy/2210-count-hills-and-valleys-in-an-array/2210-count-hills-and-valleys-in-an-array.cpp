class Solution {
public:
    int countHillValley(vector<int>& v) {
        int c=0, lt=0;

        for(int i=1;i<v.size()-1;i++){
            if(v[i]!=v[i+1]){
                if(v[i]> v[lt] && v[i]>v[i+1] || 
                    v[i]< v[lt] && v[i]<v[i+1])
                    c++;
                lt=i;
            }
            
        }
        return c;
    }
};