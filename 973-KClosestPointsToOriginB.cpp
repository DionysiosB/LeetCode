class Solution {
public:

    static bool paircompare(std::vector<int> a, std::vector<int> b){
        return (a[0] * a[0] + a[1] * a[1] < b[0] * b[0] + b[1] * b[1]);
    }

    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        sort(points.begin(), points.end(), paircompare);
        std::vector<std::vector<int> > v(points.begin(), points.begin() + k);
        return v;
    }
};
