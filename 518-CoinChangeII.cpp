class Solution {
public:
    int change(int amount, vector<int>& coins) {
        std::vector<int> v(amount + 1, 0); v[0] = 1;
        for(int p = 0; p < coins.size(); p++){
            int d = coins[p];
            for(int a = 1; a <= amount; a++){
                if(a < d){continue;}
                v[a] += v[a - d];
            }
        }

        return v.back();
    }
};
