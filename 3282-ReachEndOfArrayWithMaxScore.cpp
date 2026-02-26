class Solution {
public:
    long long findMaximumScore(vector<int>& nums) {

        long long mx(0), total(0);
        for(long long p = 0; p < nums.size(); p++){
            total += mx;
            mx = (mx > nums[p] ? mx : nums[p]);
        }

        return total;
    }
};
