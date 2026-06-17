class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {

        long long s(0), total(0);
        for(int num: nums){total += num;}
        int cnt(0);
        for(size_t p = 0; p + 1 < nums.size(); p++){s += nums[p]; cnt += (2 * s >= total);}
        return cnt;
    }
};
