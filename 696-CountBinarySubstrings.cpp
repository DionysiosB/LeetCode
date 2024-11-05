class Solution {
public:
    int countBinarySubstrings(string s) {
        std::vector<int> v;
        int cnt(1);
        for(int p = 1; p < s.size(); p++){
            if(s[p] == s[p - 1]){++cnt;}
            else{v.push_back(cnt); cnt = 1;}
        }
        v.push_back(cnt);

        int total(0);
        for(int p = 1; p < v.size(); p++){total += (v[p - 1] < v[p] ? v[p - 1] : v[p]);}
        return total;
    }
};
