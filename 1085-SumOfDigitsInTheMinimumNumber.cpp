class Solution {
public:
    int sumOfDigits(vector<int>& nums) {
        int mn(101);
        for(int p = 0; p < nums.size(); p++){mn = (mn < nums[p] ? mn : nums[p]);}
        int s(0); while(mn){s += mn % 10; mn /= 10;}
        return (s % 2 == 0);
        
    }
};
