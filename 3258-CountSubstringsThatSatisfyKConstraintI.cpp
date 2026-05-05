class Solution {
public:
    int countKConstraintSubstrings(string s, int k){
        size_t start(0), a(0), z(0), cnt(0);
        for(size_t p = 0; p < s.size(); p++){
            z += (s[p] == '0');
            a += (s[p] == '1');
            while(z > k && a > k){
                z -= (s[start] == '0');
                a -= (s[start] == '1');
                ++start;
            }
            cnt += (p - start + 1);
        }
        
        return cnt;
    }
};
