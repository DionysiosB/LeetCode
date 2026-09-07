class Solution {
public:
    int maxSum(vector<int>& nums) {
        bool v[201] = {0};
        bool empty(true);

        int mxn(-205), total(0);
        for(int p = 0; p < nums.size(); p++){
            if(nums[p] < 0){mxn = (mxn > nums[p] ? mxn : nums[p]);}
            if(nums[p] < 0 || v[nums[p] + 100]){continue;}
            empty = false;
            v[nums[p] + 100] = true;
            total += nums[p];
        }
        return empty ? mxn : total;
    }
};
