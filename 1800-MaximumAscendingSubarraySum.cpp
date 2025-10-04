class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int mx(nums[0]), cur(nums[0]);
        for(int p = 1; p < nums.size(); p++){
            if(nums[p - 1] < nums[p]){cur += nums[p]; mx = (mx > cur ? mx : cur);}
            else{cur = nums[p];}
        }

        return mx;
    }
};
