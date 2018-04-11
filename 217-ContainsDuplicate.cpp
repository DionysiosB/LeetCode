class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        std::set<int> s;
        for(int p = 0; p < nums.size(); p++){
            if(s.count(nums[p]) > 0){return true;}
            s.insert(nums[p]);
        }
        return false;
    }
};
