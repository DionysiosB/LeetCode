class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(long p = 2; p < nums.size(); p += 2){std::swap(nums[p - 1], nums[p]);}
    }
};
