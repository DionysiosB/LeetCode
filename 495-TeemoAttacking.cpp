class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int res(0), nxt(-1);
        for(int p = 0; p < timeSeries.size(); p++){
            int diff = timeSeries[p] - nxt - 1;
            if(diff < 0){res += diff;}
            res += duration;
            nxt = timeSeries[p] + duration - 1; 
        }

        return res;
    }
};
