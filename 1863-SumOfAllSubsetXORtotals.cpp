class Solution {
public:
    int subsetXORSum(vector<int>& nums){
        int n = nums.size();
        int ub = (1 << n);

        int total(0);
        for(int p = 1; p < ub; p++){
            int m(p), cur(0);
            for(int d = 0; d < n; d++){
                if(m % 2){cur ^= nums[d];}
                m /= 2;
            }
            total += cur;
        }

        return total;
    }
};
