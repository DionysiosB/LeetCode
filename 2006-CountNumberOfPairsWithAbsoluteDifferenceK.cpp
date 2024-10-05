class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        std::map<int, int> m;
        for(int p = 0; p < nums.size(); p++){++m[nums[p]];}
        int cnt(0);
        for(std::map<int, int>::iterator it = m.begin(); it != m.end(); it++){
            int val = it->first;
            int cur = it->second;
            if(m.count(val + k )){cnt += cur * m[val + k];}
        }

        return cnt;
    }
};
