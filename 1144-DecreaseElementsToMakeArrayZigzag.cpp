class Solution {
public:
    int movesToMakeZigzag(vector<int>& nums) {
        int res(1001 * nums.size());

        for(int offset = 0; offset <= 1; offset++){
            int cnt(0);
            for(int p = offset; p < nums.size(); p += 2){
                int left  = (p ? nums[p - 1] : 1e5);
                int right = (p + 1 < nums.size() ? nums[p + 1] : 1e5);
                int target = (left < right ? left : right) - 1;
                cnt += (nums[p] > target ? (nums[p] - target) : 0);
            }

            res = (res < cnt ? res : cnt);
        }

        return res;
    }
};
