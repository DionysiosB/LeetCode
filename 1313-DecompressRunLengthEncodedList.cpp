class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        std::vector<int> res;
        for(int p = 0; p < nums.size(); p += 2){
            for(int u = 0; u < nums[p]; u++){res.push_back(nums[p + 1]);}
        }
        return res;
    }
}
