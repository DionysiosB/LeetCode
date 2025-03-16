class Solution {
public:
    vector<int> partitionLabels(string s) {
        
        std::map<char, int> m;
        for(int p = 0; p < s.size(); p++){m[s[p]] = p;}
        
        int idx(0), prev(-1);
        std::vector<int> res;
        for(int p = 0; p < s.size(); p++){
            idx = (idx > m[s[p]] ? idx : m[s[p]]);
            if(idx == p){res.push_back(p - prev); prev = p;}
        }
        
        return res;
    }
};
