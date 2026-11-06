class Solution {
public:
    long long countBadPairs(vector<int>& nums) {

        const int n = nums.size();
        std::unordered_map<int, int> m;
        for(int p = 0; p < nums.size(); p++){++m[nums[p] - p];}
        long long total(0);
        for(std::pair<int, int> x : m){
            long long val = x.second;
            total += val * (n - val);
        }

        return total / 2;
    }
};
