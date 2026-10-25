class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {

        std::vector<int> v(value, 0);
        for(int x : nums){++v[(value + (x % value)) % value];}

        int mncnt(nums.size());
        int mnpos(-1);

        for(int p = 0; p < value; p++){
            if(v[p] < mncnt){mnpos = p; mncnt = v[p];}
        }

        return (value * mncnt + mnpos + (value == 1));
    
    }
};
