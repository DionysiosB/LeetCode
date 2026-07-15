class Solution {
public:
    int maxDistinctElements(vector<int>& nums, int k) {

        sort(nums.begin(), nums.end());
        nums[0] -= k;

        std::set<int> s;
        s.insert(nums[0]);

        for(size_t p = 1; p < nums.size(); p++){
            int target = nums[p - 1] + 1;
            int diff = target - nums[p];
            if(diff < -k){nums[p] -= k;}
            else if(diff > k){nums[p] += k;}
            else{nums[p] += diff;}
            s.insert(nums[p]);
        }

        return s.size();
    }
};
