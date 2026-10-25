class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {

        if(!nums.size()){return 0;}
        long mn(1e9 + 7), mx(0);
        for(int num : nums){
            mn = (mn < num ? mn : num);
            mx = (mx > num ? mx : num);
        }

        return k * (mx - mn);
    }
};
