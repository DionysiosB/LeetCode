class Solution {
public:
    long long minimumHealth(vector<int>& damage, int armor) {

        long long total(0);
        long long mxd(0);
        for(long long d : damage){
            total += d;
            mxd = std::max(mxd, d);
        }

        return total - std::min(mxd, (long long)armor) + 1;
    }
};
