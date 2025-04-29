class Solution {
public:
    int maximumXOR(vector<int>& nums) {
        int ans(0);
        for(int p = 0; p < nums.size(); p++){ans |= nums[p];}
        return ans;
    }
};
