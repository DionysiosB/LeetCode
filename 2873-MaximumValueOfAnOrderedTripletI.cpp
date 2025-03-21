class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        
        int n = nums.size();
        long long res(0);
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                for(int k = j + 1; k < n; k++){
                    long long cur = ((long long) nums[k]) * (nums[i] - nums[j]);
                    res = (res > cur ? res : cur);
                }
            }
        }
        
        return res;
    }
};
