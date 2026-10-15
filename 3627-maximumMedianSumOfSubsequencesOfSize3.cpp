class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());
        long long total(0);

        //The k-th largest median *has* to have at least k larger unused elements before it
        //So the best we can do is every other element after sorting
        for(int p = 1, cnt = 0; cnt < (nums.size() / 3) && p < nums.size(); p += 2, cnt++){total += nums[p];}
        return total;
    }
};
