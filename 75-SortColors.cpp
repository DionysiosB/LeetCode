class Solution {
public:
    void sortColors(std::vector<int>& nums) {
        
        const int C = 3;
        std::vector<int> count(C, 0);
        for(int p = 0; p < nums.size(); p++){++count[nums[p]];}
        
        size_t index(0);
        for(int p = 0; p < C; p++){while(count[p]--){nums[index] = p; ++index;}}
    }
};
