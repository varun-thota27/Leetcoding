class Solution {
public:
    string reverseVowels(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int lt=0;
        int rt=s.length()-1;
        string w=s;
        string v="aeiouAEIOU";
        while(lt<rt)
        {
            while(lt<rt && v.find(w[lt])==string :: npos)
            lt++;

            while(lt<rt && v.find(w[rt])==string:: npos)
            rt--;

            swap(w[lt],w[rt]);
            lt++;
            rt--;
        }
        return w;
    }
};