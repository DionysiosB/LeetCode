int gcd(int a, int b){return b ? gcd(b, a % b): a;}

class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mn(nums[0]), mx(nums[0]);
        for(int p = 0; p < nums.size(); p++){
            mn = (mn < nums[p] ? mn : nums[p]);
            mx = (mx > nums[p] ? mx : nums[p]);
        }

        return gcd(mn, mx);
    }
};
