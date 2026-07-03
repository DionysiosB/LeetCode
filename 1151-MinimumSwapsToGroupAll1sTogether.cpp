class Solution {
public:
    int minSwaps(vector<int>& data) {

        const int n = data.size();
        std::vector<int> cv(n, 0);
        for(int p = 0; p < n; p++){
            cv[p] = (p ? cv[p - 1] : 0) + data[p];
        }
        
        int sa = cv.back();
        if(!sa){return 0;}
        int ans(n);

        for(int p = 0; p < n; p++){
            if(sa + p > n){break;}
            int ones = cv[p + sa - 1] - (p ? cv[p - 1] : 0);
            int swaps = sa - ones;
            ans = std::min(ans, swaps);
        }

        return ans;
    }
};
