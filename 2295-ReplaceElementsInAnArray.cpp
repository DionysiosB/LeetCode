class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {

        std::unordered_map<int, int> mpos;
        for(int p = 0; p < nums.size(); p++){mpos[nums[p]] = p;}

        for(int p = 0; p < operations.size(); p++){
            int from = operations[p][0];
            int to = operations[p][1];
            int idx = mpos[from];
            nums[idx] = to;
            mpos.erase(from);
            mpos[to] = idx;
        }

        return nums;
    }
};
