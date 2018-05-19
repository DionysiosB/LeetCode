class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        
        int n = nums.size();
        std::vector<std::pair<int, int> > a(n);
        for(int p = 0; p < n; p++){a[p] = std::make_pair(nums[p], p);}
        sort(a.rbegin(), a.rend());
        
        std::vector<std::string> res(n);
        if(n > 0){res[a[0].second] = "Gold Medal";}
        if(n > 1){res[a[1].second] = "Silver Medal";}
        if(n > 2){res[a[2].second] = "Bronze Medal";}
        for(int p = 3; p < nums.size(); p++){res[a[p].second] = std::to_string(p + 1);}
        return res;
    }
};
