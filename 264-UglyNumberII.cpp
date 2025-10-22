class Solution {
public:
    int nthUglyNumber(int n) {
        std::set<long> s; s.insert(1);
        long res(0);
        for(long p = 0; p < n; p++){
            res = *s.begin();
            s.erase(res);
            s.insert(2 * res); s.insert(3 * res); s.insert(5 * res);
        }

        return res;
    }
};
