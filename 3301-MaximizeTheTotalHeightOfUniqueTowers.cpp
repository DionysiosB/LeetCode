class Solution {
public:
    long long maximumTotalSum(vector<int>& maximumHeight) {

        long long limit(1e9 + 7), total(0);
        sort(maximumHeight.rbegin(), maximumHeight.rend());
        for(long p = 0; p < maximumHeight.size(); p++){
            long long cur = (maximumHeight[p] < limit ? maximumHeight[p] : limit);
            if(cur <= 0){return -1;}
            total += cur;
            limit = cur - 1;
        }
        
        return total;
    }
};
