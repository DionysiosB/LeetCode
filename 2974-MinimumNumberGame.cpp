iclass Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int p = 0; p < nums.size(); p += 2){
            int x = nums[p]; nums[p] = nums[p + 1]; nums[p + 1] = x;
        }

        return nums;
    }
};
