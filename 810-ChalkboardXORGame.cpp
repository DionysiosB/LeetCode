class Solution {
public:
    bool xorGame(vector<int>& nums) {        
        long xs(0);
        for(long p = 0; p < nums.size(); p++){xs ^= nums[p];}
        return (xs == 0) || (nums.size() % 2 == 0);
    }
};
