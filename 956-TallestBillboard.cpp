class Solution {
public:
    int tallestBillboard(vector<int>& rods) {

        const int  s = std::accumulate(rods.begin(), rods.end(), 0);
        std::vector<int> f(s + 1, -1); f[0] = 0; //f represents the max height at current difference

        for(const int h : rods){
            std::vector<int> g = f;
            for(int diff = 0; diff + h <= s; diff++){
                if(f[diff] < 0){continue;}
                g[diff] = std::max(g[diff], f[diff]);
                g[diff + h] = std::max(g[diff+ h], f[diff]);
                g[std::abs(diff - h)] = std::max(g[std::abs(diff - h)], f[diff] + std::min(diff, h));
            }

            f = g;
        }

        return f[0];
    }
};
