class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        std::vector<int> v(1e4 + 7, 0), f(1e4 + 7, 0);
        for(int p = 0; p < nums.size(); p++){++v[nums[p]];}
        f[1] = v[1];
        for(int p = 2; p < f.size(); p++){
            int a = f[p - 1];
            int b = f[p - 2] + p * v[p];
            f[p] = (a > b ? a : b);
        }

        return f.back();
    }
};
