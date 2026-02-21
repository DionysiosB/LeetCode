class Solution {
public:

    int getNumber(std::vector<int> v){
        int total(0), u(1);
        for(long p = 0; p < v.size(); p++){
            int x = v[p];
            while(x){total += u * (x % 2); u *= 2; x /= 2;}
        }

        return total;
    }

    int maxGoodNumber(vector<int>& nums) {
        int res(0);
        std::vector<int> v = {nums[0], nums[1], nums[2]};
        int cur = getNumber(v); res = cur;
        
        v = {nums[0], nums[2], nums[1]}; cur = getNumber(v); res = (res > cur ? res : cur);
        v = {nums[1], nums[0], nums[2]}; cur = getNumber(v); res = (res > cur ? res : cur);
        v = {nums[1], nums[2], nums[0]}; cur = getNumber(v); res = (res > cur ? res : cur);
        v = {nums[2], nums[0], nums[1]}; cur = getNumber(v); res = (res > cur ? res : cur);
        v = {nums[2], nums[1], nums[0]}; cur = getNumber(v); res = (res > cur ? res : cur);

        return res;
        
    }
};
