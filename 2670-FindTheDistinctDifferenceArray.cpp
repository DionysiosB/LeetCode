class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        std::vector<int> pre(nums.size()); std::set<int> ps;
        for(int p = 0; p < nums.size(); p++){ps.insert(nums[p]); pre[p] = ps.size();}
        std::vector<int> post(nums.size()); std::set<int> fs;
        for(int p = nums.size() - 1; p >= 0; p--){fs.insert(nums[p]); post[p] = fs.size();}
        std::vector<int> res(nums.size()); res.back() = pre.back();
        for(int p = 0; p + 1 < nums.size(); p++){res[p] = pre[p] - post[p + 1];}
        return res;
    }
};
