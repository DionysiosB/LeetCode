class Solution {
public:
    vector<string> generatePossibleNextMoves(string s) {
        std::vector<std::string> v;
        for(int p = 1; p < s.size(); p++){
            if(s[p - 1] == '+' && s[p] == '+'){v.push_back(s); v.back()[p - 1] = v.back()[p] = '-';}
        }
        
        return v;
    }
};
