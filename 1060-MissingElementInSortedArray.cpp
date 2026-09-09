class Solution {
public:
    int missingElement(vector<int>& nums, int k) {

        for(int p = 1; p < nums.size(); p++){
            int mb = nums[p] - nums[p - 1] - 1;
            if(k <= mb){return nums[p - 1] + k;}
            k -= mb;
        }

        return nums.back() + k;
    }
};
