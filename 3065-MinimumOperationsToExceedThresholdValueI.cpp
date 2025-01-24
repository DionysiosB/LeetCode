class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int cnt(0);
        for(int p = 0; p < nums.size(); p++){cnt += (nums[p] < k);}
        return cnt;
    }
};
