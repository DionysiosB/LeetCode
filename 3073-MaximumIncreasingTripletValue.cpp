class Solution {
public:
    int maximumTripletValue(vector<int>& nums) {
        const int n = nums.size();
        std::vector<int> rm(n, 0);
        rm.back() = nums.back();
        for(int p = n - 2; p >= 0; p--){rm[p] = (nums[p] > rm[p + 1] ? nums[p] : rm[p + 1]);}
        std::set<int> s; s.insert(nums[0]);
        int mx(0);

        for(int p = 1; p + 1 < n; p++){
            std::set<int>::iterator it = s.lower_bound(nums[p]);
            if(it == s.begin()){s.insert(nums[p]); continue;}
            int prev = *(--it);
            s.insert(nums[p]);
            if(nums[p] >= rm[p + 1]){continue;}
            int cur = prev - nums[p] + rm[p + 1];
            mx = (mx > cur ? mx : cur);
        }

        return mx;
    }
};
