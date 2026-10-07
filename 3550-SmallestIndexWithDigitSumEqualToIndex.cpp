class Solution {
public:
    int smallestIndex(vector<int>& nums) {

        for(int p = 0; p < nums.size(); p++){
            int s(0);
            while(nums[p]){s += nums[p] % 10; nums[p] /= 10;}
            if(s == p){return p;}
        }

        return -1;
    }
};
