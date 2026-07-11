class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        std::map<int, int> m;
        for(size_t p = 0; p < nums.size(); p++){
            if(p > 0 && nums[p - 1] == nums[p]){continue;}
            for(size_t q = p + 1; q < nums.size(); q++){
                if(q > 0 && nums[q - 1] == nums[q]){continue;}
                if(nums[q] == nums[p]){continue;}
                ++m[nums[p] * nums[q]];
            }
        }

        int total(0);
        for(std::map<int, int>::iterator it = m.begin(); it != m.end(); it++){
            int css = it->second;
            total += 4 * css * (css - 1);
        }
        return total;
    }
};
