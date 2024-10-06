class Solution {

    private:
   static bool compare(const string &a,const string &b){
        return (a+b)>(b+a);
   }
public:
    string largestNumber(vector<int>& v) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<string> vec;

        for(int x:v)
        {
            vec.push_back(to_string(x));
        }
        sort(vec.begin(),vec.end(),compare);
        if(vec[0]=="0")
        return "0";

        string r;

        for(auto x:vec)
         r+=x;

         return r;
        
    }
};