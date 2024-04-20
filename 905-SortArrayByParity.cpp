bool cmp(int x, int y){
    return (x % 2) < (y % 2);
}

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        sort(nums.begin(), nums.end(), cmp);
        return nums;
    }
};
