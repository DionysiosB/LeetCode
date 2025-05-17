class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        int n = nums.size();
        int total(0); for(int p = 0; p < nums.size(); p++){total += nums[p];}
        sort(nums.rbegin(), nums.rend());
        std::vector<int> v; int s(0);
        for(int p = 0; p < nums.size(); p++){
            v.push_back(nums[p]);
            s += nums[p];
            if(2 * s > total){return v;}
        }

        return v;
    }
};
