class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        std::vector<int> a, b;
        a.push_back(nums[0]); b.push_back(nums[1]);
        for(int p = 2; p < nums.size(); p++){
            if(a.back() > b.back()){a.push_back(nums[p]);}
            else{b.push_back(nums[p]);}
        }
        
        for(int p = 0; p < b.size(); p++){a.push_back(b[p]);}
        return a;
    }
};
