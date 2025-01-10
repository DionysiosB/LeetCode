class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        std::set<int> s;
        for(int p = 0; p < nums.size(); p++){
            if(nums[p]){s.insert(nums[p]);}
        }
        return s.size();
    }
};
