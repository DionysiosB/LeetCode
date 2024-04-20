class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {

        int mn(1e4), mx(-1);
        for(int p = 0; p < nums.size(); p++){
            mn = (mn < nums[p] ? mn : nums[p]);
            mx = (mx > nums[p] ? mx : nums[p]);
        }

        int diff = mx - mn - 2 * k;
        diff = (diff > 0 ? diff : 0);
        return diff;
    }
};
