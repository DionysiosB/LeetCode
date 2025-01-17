class Solution {
public:
    vector<int> lastVisitedIntegers(vector<int>& nums) {
        std::vector<int> v, res;
        int idx(0);
        for(int p = 0; p < nums.size(); p++){
            if(nums[p] > 0){v.push_back(nums[p]); idx = v.size();}
            else if(nums[p] < 0){res.push_back(idx ? v[--idx] : -1);}
        }
        
        return res;
    }
};
