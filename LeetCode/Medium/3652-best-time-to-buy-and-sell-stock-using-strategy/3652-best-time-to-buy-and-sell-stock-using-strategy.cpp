class Solution {
public:
    long long maxProfit(vector<int>& v, vector<int>& s, int k) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int n =v.size();
        long long ans=0;

        for(int i=0;i<n;i++){
            ans+= 1LL*v[i]*s[i];
        }
        long long gain=LLONG_MIN, old=0,Wnew=0;
        for(int j=0;j<k;j++){
            old+= 1LL* s[j]*v[j];
            if(j>=k/2)
                Wnew+=v[j];
        }
        gain=max(gain,Wnew-old);

        for(int i=1;i+k-1<n;i++){
            int j=i+k-1;
            
            old-= 1LL* s[i-1]*v[i-1];
            if(i-1+ k/2>=1) Wnew-=v[i-1+k/2];

            old+= 1LL*s[j]*v[j];
            Wnew+= v[j];
            gain=max(gain, Wnew-old);
        }
        return ans+ max(0LL,gain);
    }
};