class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        std::vector<int> ans;
        for(int p = 0; p < nums.size(); p++){
            int x = nums[p];
            std::vector<int> dv; while(x){dv.push_back(x % 10); x /= 10;}
            for(int u = dv.size() - 1; u >= 0; u--){ans.push_back(dv[u]);}
        }

        return ans;
    }
}
