class Solution {
public:
    int largestUniqueNumber(vector<int>& nums) {
        std::set<int> u, d;
        for(int p = 0; p < nums.size(); p++){
            if(d.count(nums[p])){continue;}
            else if(u.count(nums[p])){u.erase(nums[p]); d.insert(nums[p]);}
            else{u.insert(nums[p]);}
        }
        
        if(!u.empty()){return *u.rbegin();}
        else{return -1;}
        
        
    }
};
