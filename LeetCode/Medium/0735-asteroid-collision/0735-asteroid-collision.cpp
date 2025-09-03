class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;
        stack<int> stk;

        for(int x: asteroids){

            int f=0;

            while(!stk.empty() && stk.top()>0 && x<0){
                if(abs(stk.top())<abs(x)){
                    stk.pop();
                    continue;
                }
                else if(abs(stk.top())==abs(x)){
                    stk.pop();
                }
                f=1;
                break;
            }
            if(!f){
                stk.push(x);
            }
        }
        while(!stk.empty()){
            ans.push_back(stk.top());
            stk.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};