class Solution {
public:
    int removePalindromeSub(string s) {

        for(int p = 0; p < s.size() - 1 - p; p++){
            if(s[p] != s[s.size() - 1 - p]){return 2;}
        }

        return 1;
    }
};
