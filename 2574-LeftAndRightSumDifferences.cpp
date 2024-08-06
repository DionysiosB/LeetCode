class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        std::vector<int> left(nums);  for(int p = 1;     p < n;  p++){left[p]  += left[p - 1];}
        std::vector<int> right(nums); for(int p = n - 2; p >= 0; p--){right[p] += right[p + 1];}
        std::vector<int> res(n, 0);
        res[0]     = right[0] - nums[0];
        res[n - 1] = left.back() - nums.back();
        for(int p = 1; p + 1 < n; p++){
            int diff = right[p + 1] - left[p - 1];
            res[p] = (diff > 0 ? diff : -diff);
        }

        return res;
    }
};
