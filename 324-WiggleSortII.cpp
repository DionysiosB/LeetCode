class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int mid( (nums.size() + 1) / 2);
        int idx(nums.size() - 1);
        std::vector<int> v;
        for(int p = mid - 1; p >= 0; p--){
            v.push_back(nums[p]);
            if(idx >= mid){v.push_back(nums[idx--]);}
        }

        nums = v;
    }
};
