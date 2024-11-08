class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        std::vector<bool> v(nums.size() + 1, 0);
        std::vector<int> res; 
        for(int p = 0; p < nums.size(); p++){
            if(v[nums[p]]){res.push_back(nums[p]);}
            v[nums[p]] = 1;
        }
        for(int p = 1; p <= nums.size(); p++){
            if(!v[p]){res.push_back(p); break;}
        }
        
        return res;
    }
};
