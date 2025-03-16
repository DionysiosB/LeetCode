class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int sx(k);
        for(int p = 0; p < nums.size(); p++){sx ^= nums[p];}
        int cnt(0); while(sx){cnt += (sx % 2); sx /= 2;}
        return cnt;
    }
};
