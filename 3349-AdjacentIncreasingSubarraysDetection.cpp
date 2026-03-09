class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {

        std::vector<bool> v(nums.size(), 0); v[0] = 1;
        int inc(1);
        for(int p = 1; p < nums.size(); p++){
            if(nums[p - 1] < nums[p]){++inc;}
            else{inc = 1;}
            if(inc >= k){v[p] = 1;}
        }
        for(int p = 2 * k - 1; p < v.size(); p++){if(v[p] && v[p - k]){return true;}}
        return false;
    }
};
