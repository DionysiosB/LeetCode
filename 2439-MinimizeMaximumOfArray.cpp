class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        long long cs(0), mx(0), n(nums.size());
        for(int p = 0; p < n; p++){
            cs += nums[p];
            long long tst = (cs + p) / (p + 1);
            mx = (tst > mx ? tst : mx);
        }
        return (int) mx;
    }
};
