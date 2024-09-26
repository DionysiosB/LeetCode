class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        std::vector<int> v(points.size());
        for(int p = 0; p < points.size(); p++){v[p] = points[p][0];}
        sort(v.begin(), v.end());
        long mx(0);
        for(long p = 1; p < v.size(); p++){
            int diff = v[p] - v[p - 1];
            mx = (mx > diff ? mx : diff);
        }

        return mx;
    }
}
