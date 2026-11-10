class Solution {
public:
    int absDifference(vector<int>& nums, int k) {

        const int n = nums.size();
        sort(nums.begin(), nums.end());\
        int s(0);
        for(long p = 0; p < k; p++){s += nums[n - 1 - p] - nums[p];}
        return s;  
    }
};
