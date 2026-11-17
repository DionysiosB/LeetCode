class Solution {
public:
    int maxFreeTime(int eventTime, int k, vector<int>& startTime, vector<int>& endTime) {

        const int n = startTime.size();

        std::vector<int> cumdur(n + 1);
        for(int p = 1; p <= n; p++){cumdur[p] = cumdur[p - 1] + endTime[p - 1] - startTime[p - 1];}

        int mxt(0);
        for(int p = k - 1; p < n; p++){
            int left = (p == k - 1) ? 0 : endTime[p - k];
            int right = (p == n - 1) ? eventTime : startTime[p + 1];
            mxt = std::max(mxt, (right - left) - (cumdur[p + 1] - cumdur[p - (k - 1)]) );
        }

        return mxt;
    }
};
