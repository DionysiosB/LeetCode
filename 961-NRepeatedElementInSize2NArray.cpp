class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        std::set<int> s;
        for(int p = 0; p < nums.size(); p++){
            if(s.count(nums[p])){return nums[p];}
            s.insert(nums[p]);
        }

        return 0;
    }
};
