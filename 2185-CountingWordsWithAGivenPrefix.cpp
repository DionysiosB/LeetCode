class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt(0);
        for(int p = 0; p < words.size(); p++){
            cnt += (words[p].find(pref) == 0);
        }
        
        return cnt;
    }
};
