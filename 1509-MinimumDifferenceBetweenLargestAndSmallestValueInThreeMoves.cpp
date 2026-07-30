class Solution {
public:
    int minDifference(vector<int>& nums) {

        if(nums.size() <= 4){return 0;}
        sort(nums.begin(), nums.end());


        const int n = nums.size();
        int res(nums.back() - nums[0]);
        for(int p = 0; p < 4; p++){
            int diff = nums[n - 4 + p] - nums[p];
            res = std::min(res, diff); 
        }

        return res;
    }
};
