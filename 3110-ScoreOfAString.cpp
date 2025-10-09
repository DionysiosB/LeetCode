class Solution {
public:
    int scoreOfString(string s) {
        int total(0);
        for(int p = 1; p < s.size(); p++){
            total += std::abs(s[p] - s[p - 1]);
        }
        return total;
    }
};
