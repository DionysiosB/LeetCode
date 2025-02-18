class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        
        int cnt(0);
        for(int p = 0; p < startTime.size(); p++){cnt += (startTime[p] <= queryTime && queryTime <= endTime[p]);}
        return cnt;
    }
};
