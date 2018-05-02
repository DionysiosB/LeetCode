class Solution {
public:
    int rob(std::vector<int>& nums) {
        
        std::vector<long> total(nums.size(), 0);
        if(nums.size() == 0){return 0;} 
        else{total[0] = nums[0];}
        
        if(nums.size() > 1){total[1] = (nums[0] > nums[1]) ? nums[0] : nums[1];}
        for(int p = 2; p < nums.size(); p++){
            total[p] = (total[p - 1] > (total[p - 2] + nums[p])) ? total[p - 1] : (total[p - 2] + nums[p]);
        }
        
        return total.back();
    }
};
