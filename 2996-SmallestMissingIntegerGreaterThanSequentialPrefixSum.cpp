class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int total(nums[0]); bool seq(true);
        std::set<int> s; s.insert(nums[0]);
        for(int p = 1; p < nums.size(); p++){
            if(seq && nums[p] == nums[p - 1] + 1){total += nums[p];}
            else{seq = false;}
            s.insert(nums[p]);
        }
        
        while(s.count(total)){++total;}
        return total;
    }
};
