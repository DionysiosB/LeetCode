class Solution {
public:
    bool canAttendMeetings(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        for(int p = 1; p < intervals.size(); p++){
            if(intervals[p - 1][1] > intervals[p][0]){return false;}
        }
        
        return true;
    }
};
