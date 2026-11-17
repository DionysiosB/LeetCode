class Solution {
public:
    int intersectionSizeTwo(vector<vector<int>>& intervals) {

        sort(intervals.begin(),intervals.end(),
            [&](std::vector<int> &x, std::vector<int> &y){return (x[1] == y[1] ? (x[0] > y[0]) : (x[1] < y[1]));}
        );

        int prev(-1), last(-1), cnt(0);
        for(std::vector<int> x : intervals){
            int left(x[0]), right(x[1]);
            if(last < left){prev = right - 1; last = right; cnt += 2;}
            else if(prev < left){prev = last; last = right; ++cnt;}
        }

        return cnt;
    }
};
