class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int mndiff(nums[1] - nums[0]);
        for(int p = 2; p < nums.size(); p++){
            int diff = nums[p] - nums[p - 1];
            mndiff = (mndiff < diff ? mndiff : diff);
        }

        return mndiff;
    }
};
