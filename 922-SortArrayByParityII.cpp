class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        std::vector<int> res(nums.size(), 0);
        int a(0), b(1);
        for(int p = 0; p < nums.size(); p++){
            if(nums[p] % 2){res[b] = nums[p]; b += 2;}
            else{res[a] = nums[p]; a += 2;}
        }

        return res;
    }
};
