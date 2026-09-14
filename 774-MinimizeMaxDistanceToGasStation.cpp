class Solution {
public:

    bool check(std::vector<int> &v, double tst, int k){
        const double eps = 1e-8;
        int added(0);
        for(size_t p = 1; p < v.size(); p++){
            double dist = v[p] - v[p - 1];
            added += (int) ((v[p] - v[p - 1] - eps) / tst);
            if(added > k){return false;}
        }

        return true;
    }


    double minmaxGasDist(vector<int>& stations, int k) {
        const double eps = 1e-8;
        double res(0.0), left(eps), right(1e8 + 7);
        while(right > left + 1e-7){
            double mid = (left + right) / 2;
            if(check(stations, mid, k)){res = mid; right = mid;}
            else{left = mid;}
        }

        return res;
    }
};
