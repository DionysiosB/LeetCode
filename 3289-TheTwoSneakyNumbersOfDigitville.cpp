class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        std::vector<bool> v(nums.size() - 2, 0);
        std::vector<int> ans;
        for(long p = 0; p < nums.size(); p++){
            if(v[nums[p]]){ans.push_back(nums[p]);}
            else{v[nums[p]] = 1;}
        }

        return ans;
    }
};
