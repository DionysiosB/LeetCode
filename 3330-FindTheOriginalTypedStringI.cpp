class Solution {
public:
    int possibleStringCount(string word) {
        int cnt(1);
        for(int p = 1; p < word.size(); p++){cnt += (word[p] == word[p - 1]);}
        return cnt;
        
    }
};
