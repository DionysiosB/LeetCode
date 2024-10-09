class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int t(0);
        for(int p = 1; p < points.size(); p++){
            int xd = points[p][0] - points[p - 1][0];
            int yd = points[p][1] - points[p - 1][1];
            xd = (xd > 0 ? xd : -xd);
            yd = (yd > 0 ? yd : -yd);
            t += (xd > yd ? xd : yd);
        }

        return t;
    }
};
