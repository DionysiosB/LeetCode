class Solution {
public:
    int minimumTime(vector<int>& jobs, vector<int>& workers) {

        sort(jobs.begin(), jobs.end());
        sort(workers.begin(), workers.end());

        int mxd(0);
        for(int p = 0; p < jobs.size(); p++){
            int cur = (jobs[p] + workers[p] - 1) / workers[p];
            mxd = std::max(mxd, cur);
        }

        return mxd;
        
    }
};
