class Solution {
public:
    vector<int> resultsArray(vector<int>& nums, int k) {
        int cnt(0);
        std::vector<int> res;
        for(int p = 0; p < nums.size(); p++){
            if(nums[p] != 1 + (p ? nums[p - 1] : -1)){cnt = 0;}
            ++cnt;
            if(p >= k - 1){res.push_back(cnt >= k ? nums[p] : -1);}
        }

        return res;
    }
};
