class Solution {
public:
    int minMaxDifference(int n) {
        string s1="",s2="";
        char x=' ';
        string str= to_string(n);

        for(char ch:str){
            if(ch!='9'){
                x=ch;
                break;
            }
        }
        for(char ch:str){
            if(x==ch){
                s1+='9';
            }
            else s1+=ch;
        }
        for(int i=0;i<str.size();i++){
            if(str[0]==str[i]) s2+='0';
            else s2+=str[i];
        }

        return stoi(s1)-stoi(s2);
        
    }
};