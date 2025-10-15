class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.empty()){return 0;}

        int mn(nums[0]), mx(nums[0]), ans(nums[0]);
        for(int p = 1; p < nums.size(); p++){
            int curmin = std::min(nums[p], std::min(mn * nums[p], mx * nums[p]));
            int curmax = std::max(nums[p], std::max(mn * nums[p], mx * nums[p]));
            mn = curmin; mx = curmax;
            ans = (ans > mx ? ans : mx);
        }

        return ans;
    }
};
