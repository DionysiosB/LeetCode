class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        std::multiset<long long> ms;
        for(int p = 0; p < nums.size(); p++){ms.insert(nums[p]);}
        int cnt(0);
        while(ms.size() > 0){
            long long x = *ms.begin(); ms.erase(ms.begin());
            if(x >= k){return cnt;}
            if(ms.empty()){return -1;}
            long long y = *ms.begin(); ms.erase(ms.begin());
            ++cnt; ms.insert(x + 2 * y);
        }

        return -1;
    }
};
