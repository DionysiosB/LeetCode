class Solution {
public:
    double new21Game(int n, int k, int maxPts) {

        std::vector<double> f(n + 1, 0);
        const double lambda = 1.0 / maxPts;
        f[0] = 1.0;
        double cs(k > 0);
        for(int p = 1; p <= n; p++){
            f[p] = lambda * cs;
            if(p < k){cs += f[p];}
            if(maxPts <= p && p < k + maxPts){cs -= f[p - maxPts];}
        }

        double total(0);
        for(int p = k; p <= n; p++){total += f[p];}

        return total;
    }
};
