class Solution {
public:
    vector<double> sampleStats(vector<int>& count) {
        double mn(-1), mx(-1), mean(-1), median(-1), mode(-1);
        int64_t tc(0), tm(0), mxcnt(0);
        for(int64_t p = 0; p < 256; p++){
            if(!count[p]){continue;}
            if(mn < 0){mn = p;}
            mx = p;
            tc += count[p];
            tm += p * count[p];
            if(count[p] > mxcnt){mode = p; mxcnt = count[p];}
        }

        double avg = 1.0 * tm / tc;
        
        int64_t idx(0), idxA((tc + 1)/2), idxB((tc + 2) / 2);
        bool a(false), b(false);
        for(int64_t p = 0; p < 256; p++){
            idx += count[p];
            if(!a && idxA <= idx){idxA = p; a = true;}
            if(!b && idxB <= idx){idxB = p; b = true;}
        }
        median = 0.5 * (idxA + idxB);
        return std::vector<double>({mn, mx, avg, median, mode});
    }
};
