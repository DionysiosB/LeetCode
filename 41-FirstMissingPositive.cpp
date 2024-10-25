class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        for(int p = 0; p < nums.size(); p++){
            nums[p] = (nums[p] > 0 ? nums[p] : nums.size() + 1);
        }

        bool last(false);
        for(int p = 0; p < nums.size(); p++){
           int idx = nums[p]; idx = (idx > 0 ) ? idx : -idx; 
           if(idx == nums.size()){last = true;}
           else if(idx > nums.size()){continue;}
           else if(nums[idx] == 0){nums[idx] = -nums.size() - 1;}
           else if(nums[idx] > 0){nums[idx] = -nums[idx];}
        }

        int ans = nums.size() + last;
        for(int p = 1; p < nums.size(); p++){
            if(nums[p] >= 0){ans = p; break;}
        }

        return ans;
    }
};
