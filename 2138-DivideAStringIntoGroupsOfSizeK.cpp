class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {       
        while(s.size() % k){s += fill;}
        std::vector<std::string> v;
        for(int p = 0; p < s.size(); p += k){v.push_back(s.substr(p, k));}
        return v;
    }
};
