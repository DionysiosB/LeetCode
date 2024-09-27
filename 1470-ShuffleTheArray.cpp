class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        std::vector<int> v(2 * n);
        for(int p = 0; p < n; p++){v[2 * p] = nums[p];}
        for(int p = 0; p < n; p++){v[2 * p + 1] = nums[p + n];}
        return v;
    }
}
