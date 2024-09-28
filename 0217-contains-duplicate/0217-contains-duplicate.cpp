class Solution {
public:
    bool containsDuplicate(vector<int>& v) {

        map<int,int> mp;

        for(int x:v)
          mp[x]++;


        for(auto it: mp){
            if(it.second>1)
            return true;
        }
        return false;
    }
};