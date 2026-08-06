class Solution {
public:
    int countSubarrays(vector<int>& nums) {

        int cnt(0);
        for(int p = 2; p < nums.size(); p++){
            cnt += !(nums[p - 1] - 2 * nums[p - 2] - 2 * nums[p]);
        }
        return cnt;
    }
};
