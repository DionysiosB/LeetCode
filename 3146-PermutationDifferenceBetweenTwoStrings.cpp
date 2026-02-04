class Solution {
public:
    int findPermutationDifference(string s, string t) {
        std::vector<int> v(26); long cnt(0);
        for(long p = 0; p < s.size(); p++){v[s[p] - 'a'] = p;}
        for(long p = 0; p < t.size(); p++){
            int diff = p - v[t[p] - 'a'];
            cnt += (diff > 0 ? diff : -diff);
        }
        return cnt;
    }
};
