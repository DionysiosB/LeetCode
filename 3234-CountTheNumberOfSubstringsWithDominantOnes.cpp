class Solution {
public:
    int numberOfSubstrings(string s) {

        int cnt(0);
        for(int start = 0; start < s.size(); start++){
            int z(0), a(0);
            for(int p = start; p < s.size(); p++){
                z += (s[p] == '0');
                a += (s[p] == '1');
                if(z * z > a + (s.size() - p) ){break;}
                cnt += (a >= z * z);
            }
        }

        return cnt;
    }
};
