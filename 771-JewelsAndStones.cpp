class Solution {
public:
    int numJewelsInStones(std::string J, std::string S) {
        
        std::set<char> js;
        for(size_t p = 0; p < J.size(); p++){js.insert(J[p]);}
        
        int cnt(0);
        for(size_t p = 0; p < S.size(); p++){cnt += js.count(S[p]);}
        return cnt;
    }
};
