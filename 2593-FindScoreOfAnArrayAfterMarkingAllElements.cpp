class Solution {
public:
    long long findScore(vector<int>& nums) {
        const int n = nums.size();
        std::vector<std::pair<int, int> > v(n);
        for(int p = 0; p < n; p++){v[p] = std::make_pair(nums[p], p);}
        sort(v.begin(), v.end());
        std::vector<bool> w(n, 0);

        long long total(0);
        for(long p = 0; p < n; p++){
            int val = v[p].first;
            int pos = v[p].second;
            if(w[pos]){continue;}
            total += val;
            if(pos){w[pos - 1] = 1;}
            if(pos + 1 < n){w[pos + 1] = 1;}
        }

        return total;
    }
};
