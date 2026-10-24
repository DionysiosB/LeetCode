class Solution {
public:
    vector<int> missingRolls(vector<int>& rolls, int mean, int n) {

        const int m = rolls.size();
        int total = mean * (m + n);

        for(int x : rolls){total -= x;}

        if(total < n || total > 6 * n){return std::vector<int>();}

        std::vector<int> v(n, 1);
        total -= n;
        for(int p = 0; total && p < n; p++){
            int x = std::min(total, 5);
            v[p] += x; total -= x;
        }

        return v;
    }
};
