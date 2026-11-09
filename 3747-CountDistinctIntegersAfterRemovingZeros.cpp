class Solution {
public:
    long long countDistinct(long long n) {

        if(n < 10){return n;}

        std::string s(std::to_string(n));
        int L = s.size();
        std::vector<long long> w(L + 1, 1);
        for(int p = 1; p <= L; p++){w[p] = 9 * w[p - 1];}

        long long cnt(0);
        for(int p = 1; p < L; p++){cnt += w[p];}
        for(int p = 0; p < L; p++){
            if(s[p] > '1'){cnt += (s[p] - '1') * w[L - 1 - p];}
            else if(s[p] == '0'){return cnt;}
        }

        return (cnt + 1);
    }
};
