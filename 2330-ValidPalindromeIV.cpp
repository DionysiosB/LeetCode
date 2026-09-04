class Solution {
public:
    bool makePalindrome(string s) {

        const int n = s.size();
        int cnt(0);
        for(int p = 0; p < n - p; p++){
            if(s[p] != s[n - 1 - p]){++cnt;}
            if(cnt > 2){return false;}
        }

        return true;
    }
};
