class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {

        std::vector<std::string> res;
        if(nums.size() <= 0){return res;}
        int start(nums[0]);
        for(int p = 1; p < nums.size(); p++){
            if(nums[p] == nums[p - 1] + 1){continue;}
            const int stop = nums[p - 1];
            res.push_back(std::to_string(start) + ((start < stop) ? ("->" + std::to_string(stop)) : "") );
            start = nums[p];
        }

        res.push_back(std::to_string(start) + ((start < nums.back()) ? ("->" + std::to_string(nums.back())) : "") );
        return res;
    }
};
