class Solution {
public:
    int minMeetingRooms(vector<vector<int>>& intervals) {
        std::vector<int> v(1e6 + 7, 0);
        for(int p = 0; p < intervals.size(); p++){
            int start = intervals[p][0];
            int stop = intervals[p][1];
            ++v[start]; --v[stop];
        }

        long cs(0), mx(0);
        for(long p = 0; p < v.size(); p++){
            cs += v[p]; 
            mx = (mx > cs ? mx : cs);
        }

        return mx;
    }
};
