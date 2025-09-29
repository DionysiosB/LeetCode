class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        int mxh(0), res(-1);
        for(int p = 0; p < logs.size(); p++){
            int dur = logs[p][1] - (p ? logs[p - 1][1] : 0);
            if(dur > mxh || (dur == mxh && logs[p][0] < res)){mxh = dur; res = logs[p][0];}
        }

        return res;
    }
};
