class Solution {
public:
    int largestPerimeter(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        for(long p = nums.size() - 1; p >= 2; p--){
            if(nums[p - 2] + nums[p - 1] > nums[p]){
                return nums[p - 2] + nums[p - 1] + nums[p];
            }
        }

        return 0;
    }
};
