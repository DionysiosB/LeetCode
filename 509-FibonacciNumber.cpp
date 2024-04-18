class Solution {
public:
    int fib(int n) {
        const int N = 31;
        std::vector<int> f(N, 0);
        f[0] = 0; f[1] = 1;
        for(int p = 2; p < N; p++){f[p] = f[p - 1] + f[p - 2];}
        return f[n];
    }
};
