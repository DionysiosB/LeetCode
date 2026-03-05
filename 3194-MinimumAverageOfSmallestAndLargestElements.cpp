class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        

        sort(nums.begin(), nums.end());
        double res(nums.back());
        for(long p = 0; p < nums.size() / 2; p++){
            double cur = (nums[p] + nums[nums.size() - 1 - p]) / 2.0;
            res = (res < cur ? res : cur);
        }

        return res;
    }
};
