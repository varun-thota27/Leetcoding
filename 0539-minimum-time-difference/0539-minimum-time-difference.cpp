class Solution {
public:
    int findMinDifference(vector<string>& v) {
        vector<int> vec;

        for(string& s:v){
            int hrs=stoi(s.substr(0,2));
            int mins=stoi(s.substr(3,2));

            vec.push_back(hrs*60+mins);
        }
        sort(vec.begin(),vec.end());
        int mini=INT_MAX;
        for(int i=1;i<vec.size();i++){
            mini=min(mini,vec[i]-vec[i-1]);
        }
        int exp= 1440- vec.back()+vec.front();
        mini=min(mini,exp);

        return mini;
    }
};