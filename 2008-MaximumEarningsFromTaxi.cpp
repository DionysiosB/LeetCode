class Solution {
public:
    long long maxTaxiEarnings(int n, vector<vector<int>>& rides) {

        std::vector<long long> v(n + 1, 0);
        long long ans(0);
        sort(rides.rbegin(), rides.rend());
        int prev(n);
        for(int p = 0; p < rides.size(); p++){
            int start = rides[p][0];
            int stop = rides[p][1];
            int tip = rides[p][2];
            while(start < prev){v[prev - 1] = v[prev]; --prev;}
            int profit = stop - start + tip;
            long long postotal = profit + v[stop];
            v[start] = std::max(v[start], postotal);
            ans = std::max(ans, postotal);
        }

        return ans;
    }
};
