class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {

        int ans(0);
        for(int num : nums){
            if(num % 2){continue;}
            ans |= num;
        }

        return ans;
    }
};
