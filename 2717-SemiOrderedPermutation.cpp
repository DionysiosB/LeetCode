class Solution {
public:
    int semiOrderedPermutation(vector<int>& nums) {
        const int n = nums.size();
        int first(0), last(0);
        for(int p = 0; p < n; p++){
            if(nums[p] == 1){first = p;}
            else if(nums[p] == n){last = p;}
        }

        return (first + n - 1 - last - (last < first));
    }
};
