class Solution {
public:
    int jump(vector<int>& v) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n=v.size();
        int nr=0,f=0,c=0;

        while(f<n-1)
        {
            int far=0;
            for(int i=nr;i<=f;i++)
              far= max(far,i+v[i]);

            nr=f+1;
            f=far;
            c++;
        }
        return c;
    }
};