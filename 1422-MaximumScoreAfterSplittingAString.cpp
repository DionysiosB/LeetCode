class Solution {
public:
    int maxScore(string s) {
        int ta(0); for(int p = 0; p < s.size(); p++){ta += (s[p] == '1');}
        int sz(0), sa(0), mx(0);
        for(int p = 0; p + 1 < s.size(); p++){
            sz += (s[p] == '0');
            sa += (s[p] == '1');
            int cur = sz + (ta - sa);
            mx = (cur > mx ? cur : mx);
        }

        return mx;
    }
}
