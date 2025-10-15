class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        const int MOD = 24 * 60;

        std::vector<int> v(timePoints.size());
        for(int p = 0; p < timePoints.size(); p++){
            std::string x = timePoints[p];
            v[p] = 60 * (10 * (x[0] - '0') + (x[1] - '0')) + 10 * (x[3] - '0') + (x[4] - '0');
        }

        sort(v.begin(), v.end());
        int mnd((MOD + v[0] - v.back()) % MOD);
        for(int p = 1; p < v.size(); p++){
            int dist = v[p] - v[p - 1];
            mnd = (mnd < dist ? mnd : dist);
        }

        return mnd;
    }
};
