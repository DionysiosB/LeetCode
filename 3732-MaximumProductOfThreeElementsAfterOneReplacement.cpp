class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        
        long long mxa(0), mxb(0);
        for(int p = 0; p < nums.size(); p++){
            long long x = (nums[p] > 0 ? nums[p] : -nums[p]);
            if(x >= mxa){mxb = mxa; mxa = x;}
            else if(x > mxb){mxb = x;}
        }

        return 1e5 * mxa * mxb;
    }
};
