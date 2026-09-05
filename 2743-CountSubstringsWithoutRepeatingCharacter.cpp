class Solution {
public:
    int numberOfSpecialSubstrings(string s) {
        
        int cnt(0), idx(0);
        std::set<char> cs;
        for(int p = 0; p < s.size(); p++){
            while(cs.count(s[p])){cs.erase(s[idx]);++idx;}
            cs.insert(s[p]);
            cnt += p - idx + 1;
        }

        return cnt;
    }
};
