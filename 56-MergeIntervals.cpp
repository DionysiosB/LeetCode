bool cmp(std::vector<int> a, std::vector<int> b){return a[0] < b[0];}

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(), cmp);
        std::vector<std::vector<int> > res;
        for(int p = 0; p < intervals.size(); p++){
            if(res.empty() || res.back()[1] < intervals[p][0]){res.push_back(intervals[p]);}
            else{res.back()[1] = (res.back()[1] > intervals[p][1] ? res.back()[1] : intervals[p][1]);}
        }
        return res;
    }
};
