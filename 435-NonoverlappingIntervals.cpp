/**
 * Definition for an interval.
 * struct Interval {
 *     int start;
 *     int end;
 *     Interval() : start(0), end(0) {}
 *     Interval(int s, int e) : start(s), end(e) {}
 * };
 */
class Solution {
    
    static bool comp(Interval a, Interval b){
        if(a.start < b.start){return true;}
        else if(a.start == b.start && a.end < b.end){return true;}
        return false;
    }
    
public:
    int eraseOverlapIntervals(vector<Interval>& intervals) {
        
        int n = intervals.size();
        if(n <= 0){return 0;}
        std::sort(intervals.begin(), intervals.end(), comp);
        int prevEnd(intervals[0].end), count(0);
        for(int p = 1; p < n; p++){
            if(intervals[p].start < prevEnd){++count; prevEnd = (prevEnd < intervals[p].end) ? prevEnd : intervals[p].end;}
            else{prevEnd = intervals[p].end;}
        }
        return count;
    }
};
