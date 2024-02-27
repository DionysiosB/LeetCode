class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        std::vector<int> pos, neg;
        for(int p = 0; p < n; p++){
            if(nums[p] > 0){pos.push_back(nums[p]);}
            else{neg.push_back(nums[p]);}
        }

        std::vector<int> res;
        for(int p = 0; p < pos.size(); p++){
            res.push_back(pos[p]);
            res.push_back(neg[p]);
        }

        return res;
    }
};
