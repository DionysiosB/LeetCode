class Solution {
public:
    bool areOccurrencesEqual(string s) {
        std::vector<int> v(26, 0);
        for(int p = 0; p < s.size(); p++){++v[s[p] - 'a'];}
        int tst(0);
        for(int p = 0; p < 26; p++){
            if(!v[p]){continue;}
            else if(!tst){tst = v[p];}
            else if(v[p] != tst){return false;}
        }

        return true;
    }
};
