class Solution {
public:

    int sumOfDigits(int x){
        int sum(0);
        while(x){sum += x % 10; x /= 10;}
        return sum;
    }

    int minElement(vector<int>& nums) {
        int res(1e9);
        for(int p = 0; p < nums.size(); p++){
            int ds = sumOfDigits(nums[p]);
            res = (res < ds ? res : ds);
        }
        return res;
    }
};
