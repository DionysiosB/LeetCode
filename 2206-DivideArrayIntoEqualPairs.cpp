class Solution {
public:
    bool divideArray(vector<int>& nums) {
        std::set<int> s;
        for(int p = 0; p < nums.size(); p++){
            if(s.count(nums[p])){s.erase(nums[p]);}
            else{s.insert(nums[p]);}
        }
        return s.empty();
    }
};
