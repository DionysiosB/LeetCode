class Solution {
public:
    long long numberOfWays(string s) {
        const long long n = s.size();
        long long z(0), a(0), sz(0), sa(0), cnt(0);
        for(long long p = 0; p < s.size(); p++){
            if(s[p] == '0'){++z; sz += a; cnt += sa;}
            else if(s[p] == '1'){++a; sa += z; cnt += sz;}
        }

        return cnt;
    }
}
