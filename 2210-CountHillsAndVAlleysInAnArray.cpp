class Solution {
public:
    int countHillValley(vector<int>& nums) {
        std::vector<int> v; for(int p = 0; p < nums.size(); p++){if(v.empty() || nums[p] != v.back()){v.push_back(nums[p]);}}
        int cnt(0);
        for(int p = 1; p + 1 < v.size(); p++){
            cnt += (v[p - 1] < v[p] && v[p] > v[p + 1]) + (v[p - 1] > v[p] && v[p] < v[p + 1]);
        }
        
        return cnt;
    }
};
