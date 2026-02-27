class Solution {
public:
    int maximumProduct(vector<int>& nums, int k) {

        std::multiset<int> ms;
        for(long p = 0; p < nums.size(); p++){ms.insert(nums[p]);}
        while(k--){
            long x = *ms.begin();
            ms.erase(ms.begin());
            ms.insert(x + 1);
        }

        long long prod(1);
        const long long MOD = 1e9 + 7;
        for(std::multiset<int>::iterator it = ms.begin(); it != ms.end(); it++){prod *= *it; prod %= MOD;}
        return prod;
    }
};
