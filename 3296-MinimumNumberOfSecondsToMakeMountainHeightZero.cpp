class Solution {
public:

    bool check(int h, std::vector<int> &wt, long long ft){
        long long hs(0);
        for(long long p = 0; p < wt.size(); p++){
                hs += (long long) (sqrt(ft * 2.0 / wt[p] + 0.25) - 0.5); //Solution to the quadratic equation
        }

        return hs >= h;
    }


    long long minNumberOfSeconds(int mountainHeight, vector<int>& workerTimes) {

        long long ans(0);
        long long left(1), right(1e6 * mountainHeight * (mountainHeight + 1) / 2);

        while(left <= right){
            long long mid = (left + right) / 2;
            if(check(mountainHeight, workerTimes, mid)){ans = mid; right = mid - 1;}
            else{left = mid + 1;}
        }

        return ans;
    }
};
