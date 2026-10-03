class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {

        const int nrow = nums.size();
        const int ncol = nums[0].size();

        for(int row = 0; row < nrow; row++){
            sort(nums[row].rbegin(), nums[row].rend());
        }

        int total(0);
        for(int p = 0; p < ncol; p++){
            int cmx(0);
            for(int row = 0; row < nrow; row++){cmx = std::max(cmx, nums[row][p]);}
            total += cmx;
        }

        return total;
    }
};
