class Solution {
public:
    int minProcessingTime(vector<int>& processorTime, vector<int>& tasks) {
        sort(processorTime.begin(), processorTime.end());
        sort(tasks.rbegin(), tasks.rend());

        int res(0);
        for(long p = 0; p < processorTime.size(); p++){
            for(long q = 0; q < 3; q++){
                int cur = processorTime[p] + tasks[4 * p + q];
                res = (res > cur ? res : cur);
            }
        }

        return res;
    }
};
