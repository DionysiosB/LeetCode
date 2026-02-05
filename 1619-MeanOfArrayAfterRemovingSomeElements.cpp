class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        long n = arr.size();
        long r = n / 20;
        double s(0);
        for(long p = r; p < n - r; p++){s += arr[p];}
        return s / (n - 2 * r);
    }
};
