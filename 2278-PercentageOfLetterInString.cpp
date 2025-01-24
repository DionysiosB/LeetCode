class Solution {
public:
    int percentageLetter(string s, char letter) {
        int cnt(0);
        for(int p = 0; p < s.size(); p++){cnt += (s[p] == letter);}
        return 100 * cnt / s.size();
    }
};
