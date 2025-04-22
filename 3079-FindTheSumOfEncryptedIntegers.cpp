class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int t(0);
        for(int p = 0; p < nums.size(); p++){
            int d(0), mult(0);
            while(nums[p]){
                mult = 10 * mult + 1;
                d = (d > nums[p] % 10) ? d : (nums[p] % 10);
                nums[p] /= 10;
            }
            
            t += d * mult;
        }
        
        return t;
    }
};
