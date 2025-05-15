class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int cnt(0);
        for(int p = 0; p < nums.size(); p++){
            for(int q = p + 1; q < nums.size(); q++){
                for(int r = q + 1; r < nums.size(); r++){
                    cnt += (nums[p] != nums[q] && nums[q] != nums[r] && nums[r] != nums[p]); 
                }
            }
        }

        return cnt;
    }
};
