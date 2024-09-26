class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int cnt(0);
        for(int p = 0; p < hours.size(); p++){cnt += (hours[p] >= target);}
        return cnt;
    }
};
