class Solution {
public:
    int subarraySum(vector<int>& nums) {

        std::vector<int> cs = nums;
        for(int p = 1; p < cs.size(); p++){cs[p] += cs[p - 1];}

        int total(0);
        for(int p = 0; p < cs.size(); p++){
            int start = std::max(0, p - nums[p]);
            total += cs[p] - (start > 0 ? cs[start - 1] : 0);
        }

        return total;
    }
};
