class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        for(int p = 0; p < nums.size(); p++){
            if(p % 10 == nums[p]){return p;}
        }

        return -1;
    }
};
