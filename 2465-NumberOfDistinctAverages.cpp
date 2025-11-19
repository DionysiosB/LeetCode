class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        long left(0), right(nums.size() - 1);
        std::set<double> s;
        while(left < right){s.insert((nums[left++] + nums[right--]) / 2.0);}
        return s.size();
    }
};
