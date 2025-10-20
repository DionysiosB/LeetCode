class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        std::unordered_map<int, int> f;
        f[0] = 1;
        int cs(0), res(0);
        for(int p = 0; p < nums.size(); p++){
            cs += nums[p];
            int diff = cs - goal;
            if(f.count(diff)){res += f[diff];}
            ++f[cs];
        }

        return res;
    }
}
