class Solution {
    typedef long long ll;
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int n = nums.size();
        ll s(0);
        for(int p = 0; 2 * p < n; p++){
             ll cur(0), mult(1);
             while(nums[n - 1 - p]){
                cur += mult * (nums[n - 1 - p] % 10);
                mult *= 10;
                nums[n - 1 - p] /= 10;
             }
             if(p < n - 1 - p){cur += mult * nums[p];}
             s += cur;
        }

        return s;
    }
};
