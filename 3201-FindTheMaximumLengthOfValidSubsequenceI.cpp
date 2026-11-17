class Solution {
public:
    int maximumLength(vector<int>& nums) {

        int a(0), z(0), alt(0);
        bool prev(!(nums[0] % 2));
        for(int num : nums){
            num %= 2;
            z += 1 - num;
            a += num;
            if(num != prev){++alt;}
            prev = num;
        }

        return std::max(alt, std::max(z, a));
    }
};
