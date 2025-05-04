class Solution {
public:
    bool isMajorityElement(vector<int>& nums, int target) {
        int cnt(0);
        for(int p = 0; p < nums.size(); p++){cnt += (nums[p] == target);}
        return (cnt > (nums.size() / 2));
    }
};
