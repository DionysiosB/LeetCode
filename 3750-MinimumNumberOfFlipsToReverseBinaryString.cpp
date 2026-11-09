class Solution {
public:
    int minimumFlips(int n) {
        std::vector<bool> v;
        while(n){v.push_back(n % 2); n /= 2;}
        int cnt(0), len(v.size());
        for(int p = 0; p < len; p++){cnt += (v[p] != v[len - 1 - p]);}
        return cnt;
    }
};
