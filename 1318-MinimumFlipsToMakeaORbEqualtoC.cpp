class Solution {
public:
    int minFlips(int a, int b, int c) {
        std::vector<int> v, w;
        for(int p = 0; (a || b || c) && p < 100; p++){
            v.push_back((a % 2) + (b % 2));
            w.push_back(c % 2);
            a /= 2; b /= 2; c /= 2;
        }

        int cnt(0);
        for(int p = 0; p < v.size(); p++){cnt += (!v[p] && w[p]) + v[p] * (1 - w[p]);}
        return cnt;
    }
};
