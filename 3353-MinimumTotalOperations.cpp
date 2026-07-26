class Solution {
public:
    int minOperations(vector<int>& nums) {

        int cnt(0), target(nums.back()), cs(0);
        for(int p = nums.size() - 2; p >= 0; p--){
            int diff = target - nums[p] - cs;
            cs += diff;
            cnt += (diff != 0);
        }
        return cnt;
        
    }
};
