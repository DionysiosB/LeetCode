class Solution {
public:
    int countElements(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        if(!k){return nums.size();}
        for(long p = nums.size() - k; p >= 0; p--){
            if(p && nums[p - 1] != nums[p]){return p;}
        }

        return 0;
    }
};
