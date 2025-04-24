class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        sort(happiness.rbegin(), happiness.rend());
        long long total(0);
        for(size_t p = 0; p < happiness.size() && p < k; p++){total += ((happiness[p] > p) ? (happiness[p] - p) : 0);}
        return total;
    }
};
