class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int prev(-1007), rep(0), total(0);
        for(int p = 1; p < nums.size(); p++){
            int diff = nums[p] - nums[p - 1];
            if(diff == prev){++rep;}
            else{rep = 0;}
            total += rep;
            prev = diff;
        }

        return total;
    }
};
