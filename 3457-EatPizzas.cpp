class Solution {
public:
    long long maxWeight(vector<int>& pizzas) {

        sort(pizzas.rbegin(), pizzas.rend());
        int n = (pizzas.size()) / 4;

        long long total(0);
        size_t idx(0);
        for(int p = 0; p < (n + 1) / 2; p++){total += pizzas[idx]; ++idx;}
        for(int p = 0; p < n / 2; p++){total += pizzas[idx + 1]; idx += 2;}
        return total;
    }
};
