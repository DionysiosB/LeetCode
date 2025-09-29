class Solution {
public:
    int findMaxK(vector<int>& nums) {
        std::set<int> pos, neg;
        int res(-1);
        for(int p = 0; p < nums.size(); p++){
            if(nums[p] > 0){
                if(neg.count(-nums[p])){res = (res > nums[p] ? res : nums[p]);}
                pos.insert(nums[p]);
            }
            else{
                if(pos.count(-nums[p])){res = (res > -nums[p] ? res : -nums[p]);}
                neg.insert(nums[p]);
            }
        }

        return res;
    }
};
