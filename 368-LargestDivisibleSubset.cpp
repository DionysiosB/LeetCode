class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        std::vector<std::vector<int> > f(nums.size());
        f[0] = std::vector<int>(1, nums[0]);
        int mx(1), idx(0);
        for(int p = 1; p < f.size(); p++){
            std::vector<int> cur;
            for(int q = 0; q < p; q++){
                if(nums[p] % nums[q] == 0 && cur.size() < f[q].size()){cur = f[q];}
            }
            f[p] = cur; f[p].push_back(nums[p]);
            if(f[p].size() > mx){mx = f[p].size(); idx = p;}
        }

        return f[idx];
    }
};
