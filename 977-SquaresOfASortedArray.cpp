class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size(); std::vector<int> sq(n, 0);
        for(int p = 0; p < n; p++){sq[p] = nums[p] * nums[p];}
        sort(sq.begin(), sq.end());
        return sq;
    }
}
