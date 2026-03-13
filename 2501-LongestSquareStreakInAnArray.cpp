class Solution {
public:
    int longestSquareStreak(vector<int>& nums) {

        std::set<long long> s;
        for(int p = 0; p < nums.size(); p++){s.insert(nums[p]);}

        int res(0);
        while(!s.empty()){
            long long cur(*s.begin()), cnt(0);
            while(s.count(cur)){
                ++cnt;
                s.erase(cur);
                cur = cur * cur;
            }
            res = (res > cnt ? res : cnt);
        }

        return (res > 1 ? res : -1);
    }
};
