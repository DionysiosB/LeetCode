class Solution {
public:
    long long sumAndMultiply(int n) {
        long long s(0);
        std::vector<int> v;
        while(n){
            if(n % 10){v.push_back(n % 10); s += (n % 10);}
            n /= 10;
        }

        long long w(0);
        for(long p = v.size() - 1; p >= 0; p--){w = 10 * w + v[p];}
        return w * s;
    }
};
