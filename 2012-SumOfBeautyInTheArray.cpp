class Solution {
public:
    int sumOfBeauties(vector<int>& nums) {

        const int n = nums.size();
        std::vector<int> rv(n);
        rv.back() = nums.back();
        for(int p = n - 2; p >= 0; p--){rv[p] = std::min(nums[p], rv[p + 1]);}
        int mx(nums[0]), bs(0);
        for(int p = 1; p + 1 < n; p++){
            if(mx < nums[p] && nums[p] < rv[p + 1]){bs += 2;}
            else if(nums[p - 1] < nums[p]  && nums[p] < nums[p + 1]){bs += 1;}
            mx = std::max(mx, nums[p]);
        }

        return bs;
    }
};
