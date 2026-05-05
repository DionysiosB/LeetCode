class Solution {
public:
    string makeSmallestPalindrome(string s) {

        for(int p = 0; p < s.size() - 1 - p; p++){
            int idx = s.size() - 1 - p;
            char mc = std::min(s[p], s[idx]);
            s[p] = s[idx] = mc;
        }

        return s;
    }
};
