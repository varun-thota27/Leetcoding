class Solution {
public:
    int earliestFinishTime(vector<int>& ls, vector<int>& ld, vector<int>& ws, vector<int>& wd) {

        int ans1= INT_MAX;
        for(int i=0;i<ls.size();i++){
            int fin= ls[i] + ld[i];
            int best=INT_MAX;

            for(int j=0;j<ws.size();j++){
                int st=max(fin, ws[j]);
                int finaltime=  st+ wd[j];

                best= min(best,finaltime);
            }
            ans1= min(ans1,best);
        }
        int ans2= INT_MAX;

        for(int j=0;j< ws.size();j++){
            int fin= ws[j]+ wd[j];
            int best=INT_MAX;
            for(int i=0;i<ls.size();i++){
                int st= max(fin,ls[i]);
                int finalfin= st + ld[i];
                best= min(best,finalfin);
            }
            ans2=min(ans2,best);
        }
        return min(ans1,ans2);
    }
};