class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int cnt(0);
        for(int p = 0; p < nums.size(); p++){cnt += (nums[p] % 3 != 0);}
        return cnt;
    }
};
