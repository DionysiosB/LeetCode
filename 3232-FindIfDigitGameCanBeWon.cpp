class Solution {
public:
    bool canAliceWin(vector<int>& nums) {

        int cs(0);
        for(int p = 0; p < nums.size(); p++){
            cs += (nums[p] < 10 ? 1 : -1) * nums[p];
        }

        return cs;
    }
};
