class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        int cnt(0);
        for(int p = 0; p < nums.size(); p++){
            nums[p] += (p > 0 ? nums[p - 1] : 0);
            cnt += !nums[p];
        }
        return cnt;
    }
};
