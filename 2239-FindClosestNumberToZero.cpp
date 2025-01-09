class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        int best(1e5 + 7);
        for(int p = 0; p < nums.size(); p++){
            if(std::abs(nums[p]) < std::abs(best)){best = nums[p];}
            else if(std::abs(nums[p]) == std::abs(best) && nums[p] > best){best = nums[p];}
        }

        return best;
    }
};
