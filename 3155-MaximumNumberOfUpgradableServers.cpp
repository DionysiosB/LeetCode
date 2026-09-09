class Solution {
public:
    vector<int> maxUpgrades(vector<int>& count, vector<int>& upgrade, vector<int>& sell, vector<int>& money) {
        std::vector<int> v(count.size());
        for(int p = 0; p < v.size(); p++){
            v[p] = std::min( (long long)count[p], (count[p] * (long long)sell[p] + money[p]) / (upgrade[p] + sell[p]));
        }
        return v;
    }
};
