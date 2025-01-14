bool check(std::vector<int> &v, int loss, double target){
    double vol(0);
    for(int p = 0; p < v.size(); p++){
        if(v[p] < target){vol -= (target - v[p]);}
        else if(v[p] > target){vol += (v[p] - target) * (1.0 - loss / 100.0);}
    }
    return vol >= 0;
}


class Solution {
public:
    double equalizeWater(vector<int>& buckets, int loss) {
        double total(0.0); for(int p = 0; p < buckets.size(); p++){total += buckets[p];}
        double left(0.0), right(total / buckets.size());
        const double eps = 1e-7;
        double res(left);
        while(left + eps <= right){
            double mid = (left + right) / 2.0;
            if(check(buckets, loss, mid)){res = mid; left = mid;}
            else{right = mid;}
        }

        return res;
    }
};
