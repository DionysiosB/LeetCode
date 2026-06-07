class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {

        int len(0), mxl(0);
        for(long p = 0; p < nums.size(); p++){
            if(nums[p] > threshold){len = 0;}
            else if(p > 0 && nums[p - 1] <= threshold && nums[p - 1] % 2 != nums[p] % 2){++len;}
            else{len = !(nums[p] % 2);}
            mxl = (mxl > len ? mxl : len);
        }

        return mxl;
    }
};
