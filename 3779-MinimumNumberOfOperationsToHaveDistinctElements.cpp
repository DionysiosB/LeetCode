class Solution {
public:
    int minOperations(vector<int>& nums) {

        const int n = nums.size();
        std::set<int> s;
        int idx(-3);
        for(int p = n - 1; p >= 0; p--){
            if(s.count(nums[p])){idx = p; break;}
            s.insert(nums[p]);
        }

        return 1 + idx / 3;
    }
};
