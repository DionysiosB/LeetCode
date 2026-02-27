class Solution {
public:
    int halveArray(vector<int>& nums) {

        std::multiset<long double, std::greater<long double> > ms;
        double sum(0);
        for(long p = 0; p < nums.size(); p++){
            ms.insert(nums[p]);
            sum += nums[p];
        }

        long double target(sum / 2);
        long long cnt(0);

        while(sum > target){
            long double x = *ms.begin();
            ms.erase(ms.begin());
            ms.insert(x / 2.0);
            sum -= x / 2.0;
            ++cnt;
        }

        return cnt;
    }
};
