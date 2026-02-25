class Solution {
public:
    long long maxKelements(vector<int>& nums, int k) {

        std::multiset<long long, std::greater<long long> > ms;
        for(int p = 0; p < nums.size(); p++){ms.insert(nums[p]);}

        long long total(0);
        while(k--){
            long long x = *ms.begin();
            ms.erase(ms.begin());
            total += x;
            ms.insert((x + 2) / 3);
        }

        return total;
    }
};
