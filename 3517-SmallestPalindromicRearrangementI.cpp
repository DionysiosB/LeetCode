class Solution {
public:
    string smallestPalindrome(string s) {

        size_t sz = s.size();
        std::string hs = s.substr(0, sz / 2);
        sort(hs.begin(), hs.end());
        std::string ans(hs);
        if(sz % 2){hs += s[sz / 2];}
        std::reverse(hs.begin(), hs.end());
        ans += hs;
        return ans;
    }
};
