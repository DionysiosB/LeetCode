class Solution {
public:
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum(0);
        for(int p = 0; p < nums.size(); p++){
            int cur(p), cb(0);
            while(cur){cb += (cur % 2); cur /= 2;}
            sum += (cb == k) * nums[p];
        }
        return sum;
    }
}
