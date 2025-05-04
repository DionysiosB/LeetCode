class Solution {
public:
    int maxNumberOfBalloons(string text) {
        std::map<char, int> m;
        for(int p = 0; p < text.size(); p++){++m[text[p]];}
        
        int cnt(m['b']);
        cnt = (cnt < m['a'] ? cnt : m['a']);
        cnt = (cnt < (m['l']/2) ? cnt : (m['l']/2) );
        cnt = (cnt < (m['o']/2) ? cnt : (m['o']/2) );
        cnt = (cnt < m['n'] ? cnt : m['n']);
        return cnt;
    }
};
