class Solution {
public:
    int countElements(vector<int>& nums) {
        long mn(nums[0]), mx(nums[0]);
        for(long p = 0; p < nums.size(); p++){
            mn = (mn < nums[p] ? mn : nums[p]);
            mx = (mx > nums[p] ? mx : nums[p]);
        }

        long cnt(0);
        for(long p = 0; p < nums.size(); p++){
            cnt += (mn < nums[p] && nums[p] < mx);
        }
        return cnt;
        
    }
};
