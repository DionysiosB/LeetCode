class Solution {
public:
    int minRectanglesToCoverPoints(vector<vector<int>>& points, int w) {

        std::vector<int> v(points.size());
        for(int p = 0; p < points.size(); p++){v[p] = points[p][0];}
        sort(v.begin(), v.end());

        int cnt(0), cur(-1);
        for(int p = 0; p < v.size(); p++){
            if(cur < v[p]){++cnt; cur = v[p] + w;}
        }

        return cnt;
    }
};
