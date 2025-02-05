class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        
        if(s1==s2)
        return true;

        swap(s1[0],s1[s1.length()-1]);
        if(s1==s2)
        return true;
        swap(s1[0],s1[s1.length()-1]);
        swap(s2[0],s2[s2.length()-1]);
        if(s1==s2)
        return true;

        return false;
    }
};