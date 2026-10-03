class Solution {
public:
    int sumDistance(vector<int>& nums, string s, int d) {

        const int n = nums.size();
        std::vector<long long> v(n); for(int p = 0; p < n; p++){v[p] = nums[p];}
        for(int p = 0; p < n; p++){v[p] += (long long) d * (s[p] == 'R' ? 1 : -1);}
        sort(v.begin(), v.end());

        //Sorted array, count how many times each element is added or subtracted
        //ie added as many times as the number of elements before it, and subtracted
        //as many times as the elements after it

        long long total(0);
        const long long MOD = 1e9 + 7;
        for(int p = 0; p < n; p++){total += v[p] * (2LL * p - n + 1); total = (2 * MOD + total) % MOD;}
        return total;

    }
};
