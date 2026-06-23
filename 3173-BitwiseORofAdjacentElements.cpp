class Solution {
public:
    vector<int> orArray(vector<int>& nums) {
        std::vector<int> v(nums.size() - 1);
        for(int p = 0; p + 1 < nums.size(); p++){v[p] = nums[p] | nums[p + 1];}
        return v;
    }
};
