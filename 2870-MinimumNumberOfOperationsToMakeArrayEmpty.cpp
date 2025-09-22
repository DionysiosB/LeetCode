class Solution {
public:
    int minOperations(vector<int>& nums) {
        std::unordered_map<int, int> m;
        for(int p = 0; p < nums.size(); p++){++m[nums[p]];}
        int total(0);
        for(std::unordered_map<int, int>::iterator it = m.begin(); it != m.end(); it++){
            int val = it->second;
            if(val < 2){return -1;}
            total += (val + 2) / 3;
        }

        return total;
    }
};
