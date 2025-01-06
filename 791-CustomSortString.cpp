class Solution {
public:
    string customSortString(string order, string s) {

        std::vector<int> v(26); for(int p = 0; p < s.size(); p++){++v[s[p] - 'a'];}
        std::string res;
        for(int p = 0; p < order.size(); p++){res += std::string(v[order[p] - 'a'], order[p]); v[order[p] - 'a'] = 0;}
        for(int p = 0; p < v.size(); p++){res += std::string(v[p], p + 'a');}
        return res;
    }
};
