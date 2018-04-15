class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int x(0);
        for(int p = 0; p < nums.size(); p++){x ^= nums[p];}
        return x;
    }
};
