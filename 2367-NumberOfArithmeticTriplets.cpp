class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int left(0), right(1); int cnt(0);
        for(int p = 1; p + 1 < nums.size(); p++){
            while(nums[left] + diff < nums[p]){++left;}
            while(right + 1 < nums.size() && nums[p] + diff > nums[right]){++right;}
            cnt += (nums[left] + diff == nums[p] && nums[p] + diff == nums[right]);
        }

        return cnt;
    }
};
