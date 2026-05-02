class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {

        std::vector<int> ans;
        for(int p = 0; p < nums.size(); p++){
            int x = nums[p];
            x = (x > 0 ? x : -x);
            nums[x - 1] = -nums[x - 1];
            if(nums[x - 1] > 0){ans.push_back(x);}
        }

        return ans;
    }
};
