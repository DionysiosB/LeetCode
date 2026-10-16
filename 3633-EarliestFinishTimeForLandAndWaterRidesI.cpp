class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {

        const int A = landStartTime.size();
        const int B = waterStartTime.size();

        int tmpf(1e9);
        for(long p = 0; p < A; p++){
            int x = landStartTime[p] + landDuration[p];
            tmpf = (tmpf < x ? tmpf : x);
        }

        int tmps(1e9), res(1e9);
        for(long p = 0; p < B; p++){
            int x = waterStartTime[p] + waterDuration[p];
            tmps = (tmps < x ? tmps : x);
            int finish = (tmpf > waterStartTime[p] ? tmpf : waterStartTime[p]) + waterDuration[p];
            res = (res < finish ? res : finish);
        }


        for(long p = 0; p < A; p++){
            int finish = (tmps > landStartTime[p] ? tmps : landStartTime[p]) + landDuration[p];
            res = (res < finish ? res : finish);
        }

        return res;
    }
};
