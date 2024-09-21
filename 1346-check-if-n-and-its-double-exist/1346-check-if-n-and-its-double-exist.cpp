class Solution {
public:
    bool checkIfExist(vector<int>& v) {

        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        int j=1;

        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v.size();j++){
                 if(v[i]==2*v[j] && i!=j)
                   return true;
            }
        }

        return false;
        
    }
};