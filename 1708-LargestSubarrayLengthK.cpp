class Solution {
public:
    vector<int> largestSubarray(vector<int>& nums, int k) {

        int mxn(0), idx(0);
        for(int p = 0; p + k <= nums.size(); p++){
            if(nums[p] <= mxn){continue;}
            mxn = nums[p]; idx = p;
        }

        std::vector<int> res(k);
        for(int p = idx; p < idx + k; p++){res[p - idx] = nums[p];}
        return res;
    }
};
