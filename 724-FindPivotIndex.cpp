class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int cs(0), total(0);
        for(int p = 0; p < nums.size(); p++){total += nums[p];}
        for(int p = 0; p < nums.size(); p++){
            if(2 * cs == total - nums[p]){return p;}
            cs += nums[p];
        }

        return -1;
    }
}
