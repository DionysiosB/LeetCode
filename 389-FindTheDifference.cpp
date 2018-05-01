class Solution {
public:
    char findTheDifference(std::string s, std::string t) {
        
        const int N = 26;
        std::vector<int> count(N, 0);
        for(size_t p = 0; p < s.size(); p++){++count[s[p] - 'a'];}
        for(size_t p = 0; p < t.size(); p++){--count[t[p] - 'a'];}
        for(int p = 0; p < N; p++){if(count[p] < 0){char x = 'a' + p; return x;}}
        return '0';
    }
};
