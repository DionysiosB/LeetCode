class Solution {
public:
    int minSteps(string s, string t) {

        std::vector<int> v(26, 0);
        for(int p = 0; p < s.size(); p++){++v[s[p] - 'a']; --v[t[p] - 'a'];}
        int cnt(0); for(int p = 0; p < v.size(); p++){cnt += (v[p] > 0 ? v[p] : 0);}
        return cnt;   
    }
};
