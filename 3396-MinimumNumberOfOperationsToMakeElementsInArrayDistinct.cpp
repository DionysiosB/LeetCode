class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        std::vector<int> v(101, 0); int dup(0);
        for(int x : nums){++v[x]; dup += (v[x] == 2);}
        
        int cnt(0);
        for(int p = 0; dup && p < nums.size(); p += 3){
            for(int u = p; u < p + 3 && u < nums.size(); u++){
                --v[nums[u]]; dup -= (v[nums[u]] == 1);
            }
            ++cnt;
        }
        return cnt;
    }
};
