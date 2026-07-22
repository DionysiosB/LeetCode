class Solution {
public:
    int addMinimum(string word) {
        
        const std::string s = "abc";

        int cur(0), idx(0), cnt(0);
        while(cur < word.size()){
            if(word[cur] != s[idx % 3]){++cnt;}
            else{++cur;}
            idx = (idx + 1) % 3;
        }

        cnt += (3 - idx) % 3;

        return cnt;
    }
};
