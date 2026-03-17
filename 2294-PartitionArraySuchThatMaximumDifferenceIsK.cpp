class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());
        int start(nums[0]), cnt(1);
        for(int p = 1; p < nums.size(); p++){
            if(nums[p] > start + k){start = nums[p]; ++cnt;}
        }

        return cnt;
    }
};
