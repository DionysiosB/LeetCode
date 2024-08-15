class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        const int n = nums.size();
        std::vector<int> res(2 * n, 0);
        for(int p = 0; p < n; p++){res[p] = res[p + n] = nums[p];}
        return res;
    }
};
