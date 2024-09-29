class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& v, int k) {

        unordered_map<int,int> m;
        int n=v.size();

        for(int i=0;i<n;i++)
        {
            if(m.count(v[i]))
            {
                if(abs(i-m[v[i]])<=k)
                 return true;
            }
            m[v[i]]=i;
        }

        return false;
    }
};