class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int cnt(0);
        for(int p = 0; p < words.size(); p++){cnt += (s.find(words[p]) == 0);}
        return cnt;
    }
};
