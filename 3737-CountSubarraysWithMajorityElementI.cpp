class Solution {
public:
    int countMajoritySubarrays(vector<int>& nums, int target) {

        const int n = nums.size();
        std::vector<int> w(n, 0);
        for(int p = 0; p < n; p++){w[p] = (p ? w[p - 1] : 0) + (nums[p] == target);}

        int cnt(0);
        for(int p = 0; p < n; p++){
            for(int q = p; q < n; q++){
                int len = q - p + 1;
                int cur = w[q] - (p ? w[p - 1] : 0);
                cnt += (2 * cur > len);
            }
        }

        return cnt;
    }
};
