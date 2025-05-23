class Solution {
public:
    int calPoints(vector<string>& v) {

        vector<int> vec;

        for(int i=0;i<v.size();i++)
        {
            if(v[i]=="+"){
                vec.push_back(vec.back()+vec[vec.size()-2]);
            }
            else if(v[i]=="D"){
               vec.push_back(vec.back()*2);
            }
            else if(v[i]=="C"){
                vec.pop_back();
            }
            else
                vec.push_back(stoi(v[i]));
        }
        long sum=0;
        for(int i=0;i<vec.size();i++)
        sum+=vec[i];

        return sum;
    }
};