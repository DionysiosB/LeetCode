class Solution {
public:
    int minOperations(vector<int>& nums) {
        long prev(0), cnt(0);
        for(long p = 0; p < nums.size(); p++){
            if(nums[p] <= prev){++prev; cnt += prev - nums[p];}
            else{prev = nums[p];}
        }

        return cnt;
    }
};
