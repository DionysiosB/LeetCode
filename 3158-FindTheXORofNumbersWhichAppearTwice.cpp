class Solution {
public:
    int duplicateNumbersXOR(vector<int>& nums) {
        std::set<int> s, t;
        for(int p = 0; p < nums.size(); p++){
            if(s.count(nums[p])){t.insert(nums[p]);}
            else{s.insert(nums[p]);}
        }

        int res(0);
        for(std::set<int>::iterator it = t.begin(); it != t.end(); it++){res ^= *it;}
        return res;
    }
};
