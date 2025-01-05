class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        std::vector<bool> v(k + 1);
        int cnt(0);
        for(int p = nums.size() - 1; p >= 0; p--){
            if(nums[p] <= k && !v[nums[p]]){++cnt; v[nums[p]] = 1;}
            if(cnt == k){return nums.size() - p;}
        }

        return 0;
    }
};
