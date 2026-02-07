class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {

        int total(0);
        for(int p = 0; p < nums.size(); p++){
            int div(-1);
            for(int q = 2; q * q <= nums[p]; q++){
                if(nums[p] % q){continue;}
                if(q * q == nums[p] || div > 0){div = -1; break;}
                div = q;
            }

            total += (div > 0) * (1 + nums[p] + div + nums[p] / div);
        }

        return total;
    }
};
