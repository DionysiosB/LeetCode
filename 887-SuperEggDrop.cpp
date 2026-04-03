class Solution {
public:
    int superEggDrop(int k, int n) {

        std::vector<int> f(k + 1, 0);
        int moves(0);
        while(f.back() < n){
            std::vector<int> g(k + 1, 0);
            ++moves;
            for(int egg = 1; egg <= k; egg++){
                g[egg] = f[egg - 1] + f[egg] + 1;
            }
            f = g;
        }

        return moves;

        //The vector f denotes how many floors we can test on the respective move
        //With each additional egg, we can test an additional
        // A. If the egg breaks, f[egg - 1] with (move - 1) moves
        // B. If the egg does not break f[egg] with (move - 1) moves
        
    }
};
