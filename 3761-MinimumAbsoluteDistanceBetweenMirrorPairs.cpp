class Solution {
public:

    int reverse(int x){
        int y(0);
        while(x){y = 10 * y + (x % 10); x /= 10;}
        return y;
    }

    int minMirrorPairDistance(vector<int>& nums) {

        std::unordered_map<int, int> m;
        int mnd(-1);
        for(int p = 0; p < nums.size(); p++){
            if(m.count(nums[p]) && ((mnd < 0) || (p - m[nums[p]] < mnd)) ){mnd = p - m[nums[p]];}
            m[reverse(nums[p])] = p;
        }

        return mnd;
    }
};
